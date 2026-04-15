#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

void insertAtHead(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* rotateList(ListNode* head, int k){
    if(head == NULL || head -> next == NULL) return head;
    int cnt = 0;

    ListNode* it = head;
    
    while(it){
        cnt++;
        it = it -> next;
    }
    
    k = k % cnt;
    ListNode* prev = NULL;
    ListNode* curr = head;

    for(int i = 0; i < cnt - k; i++){
        prev = curr;
        curr = curr -> next;
    }

    ListNode* tail = curr;
    while(tail -> next){
        tail = tail -> next;
    }

    prev -> next = NULL;
    tail -> next = head;


    return curr;

}

int main() {
    vector<int> values = {1, 2, 3, 4, 5, 6};
    int k = 7;
    ListNode* head = NULL;
    for(int i = values.size() - 1; i >= 0; i--){
        insertAtHead(head, values[i]);
    }
    printList(head);

    ListNode* newHead = rotateList(head, k);
    printList(newHead);
    return 0;
}