#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int x){
        val = x;
        next = NULL;
    }
};

void insertAtHead(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

void SwapNodes(ListNode* &head){
    ListNode* dummyNode = new ListNode(0);
    dummyNode -> next = head;
    ListNode* prev = dummyNode;


    if(head == NULL || head -> next == NULL) return;
    
    while(prev -> next && prev -> next -> next){
        ListNode* fir = prev -> next;
        ListNode* sec = fir -> next;

        fir -> next = fir -> next -> next;
        sec -> next = fir;
        prev -> next = sec;

        prev = fir;
    }

    head = dummyNode -> next;
    return;
}

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1,2,3,4};
    int k = 3;
    ListNode* head = NULL;
    for(int i = nums.size() - 1; i >= 0; i--){
        insertAtHead(head, nums[i]);
    }

    SwapNodes(head);
    printList(head);


    return 0;
}