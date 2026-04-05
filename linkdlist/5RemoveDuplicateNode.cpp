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


void deleteDuplicate(ListNode* &head){

    ListNode* curr = head;

    while(curr != NULL && curr -> next != NULL){
        if(curr -> val == curr -> next -> val){
            ListNode* temp = curr -> next;
            curr->next = curr -> next -> next;
            delete temp;
        }
        else {
            curr =  curr -> next;
        }
    }

}

int main() {
    vector<int> nums = {1,1,2,3,3,4,5,5,5,6};
    ListNode* head = NULL;
    for(int i = nums.size() - 1; i >= 0; i--){
        insertAtHead(head, nums[i]);
    }

    deleteDuplicate(head);
    printList(head);
    return 0;
}