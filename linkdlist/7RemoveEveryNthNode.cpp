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

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void RemoveEveryNthNode(ListNode* &head, int k){
    ListNode* curr = head;
    ListNode* prev = NULL;

    int cnt = 1;
    while(curr){

        if(cnt == k){
            prev -> next = curr -> next;
            delete curr;
            curr = prev -> next;
            cnt = 1;
        }
        else {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
    }
}


int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int k = 3;
    ListNode* head = NULL;
    for(int i = nums.size() - 1; i >= 0; i--){
        insertAtHead(head, nums[i]);
    }

    RemoveEveryNthNode(head, k);
    printList(head);


    return 0;
}
