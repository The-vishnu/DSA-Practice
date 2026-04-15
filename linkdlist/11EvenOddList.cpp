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

ListNode* oddEvenList(ListNode* head){
    if(head == NULL || head -> next == NULL) return NULL;

    ListNode* odd = head;
    ListNode* dummy = new ListNode(-1);
    ListNode* even = odd -> next;
    ListNode* evenHead = even;
    dummy -> next = odd;

    while(even != NULL && even -> next != NULL){
        odd -> next = even -> next;
        odd = odd -> next;

        even -> next = even -> next -> next;
        even = even -> next;
    }

    odd -> next = evenHead;
    return dummy -> next;


}

int main() {
    ListNode* head = NULL;
    vector<int> values = {1, 2, 3, 4, 5, 6};
    for(int i = values.size() - 1; i >= 0; i--){
        insertAtHead(head, values[i]);
    }
    printList(head);


    ListNode* newHead = oddEvenList(head);
    printList(newHead);
    return 0;
}