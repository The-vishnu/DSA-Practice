#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {};
};

void insertAtHead(ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* reverseInGroup(ListNode* &head){

    int gn = 0;

    ListNode* curr = head;
    ListNode* prev = NULL;

    while(curr){
        gn++;
        ListNode* temp = curr;
        int cnt = 1;
        while(temp -> next && cnt < gn){
            temp = temp -> next;
            cnt++;
        }
        if(cnt %2 == 0){
            for(int i = 1; i < cnt; i++){
                ListNode* nxt = curr -> next;
                curr -> next = nxt -> next;
                nxt -> next = prev -> next;
                prev -> next = nxt;
            }

        }
        else{
            int k = cnt;

            while(curr && k){
                prev = curr;
                curr = curr -> next;
                k--;
            }
            continue;
        }

        prev = curr;
        curr = curr -> next;


    }

    return head;

}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    ListNode* head = NULL;

    for(int i = arr.size() - 1; i >= 0; i--) {
        insertAtHead(head, arr[i]);
    }
    cout << "Original List: ";
    printList(head);

    head = reverseInGroup(head);
    cout << "Modified List: ";
    printList(head);
    return 0;
}