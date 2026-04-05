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

void deleteNthFromTheLast(ListNode* & head, int k){
    int cnt = 0;
    ListNode* temp = head;

    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }

    cnt -= k;
    
    if(cnt == 0){
        temp = head;
        head = head -> next;
        delete temp;

        return;
    }
    
    ListNode* curr = head;
    ListNode* prev = NULL;
    while(cnt--){
        prev = curr;
        curr = curr -> next;
    }

    prev -> next = curr -> next;
    delete curr;

    return;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int k = 4;
    ListNode* head = NULL;
    for(int i = nums.size() - 1; i >= 0; i--){
        insertAtHead(head, nums[i]);
    }

    deleteNthFromTheLast(head, k);
    printList(head);


    return 0;
}