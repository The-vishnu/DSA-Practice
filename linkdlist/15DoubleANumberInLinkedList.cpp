#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next = NULL;

    ListNode(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(ListNode* &head, int val){
    ListNode* temp = new ListNode(val);
    temp -> next = head;
    head = temp;
}

void printLinkedList(ListNode* &head){
    ListNode* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout <<" Null";
}

void reverse(ListNode* &head){
    ListNode* curr = head;
    ListNode* nex = NULL;
    ListNode* prev = NULL;

    while(curr){
        nex = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nex;

        head = prev;
    }
}

ListNode* doubleIt(ListNode* &head){
    reverse(head);

    ListNode* it = head;
    ListNode* doubleNumber = NULL;
    int carry = 0;
    int total;

    while(it || carry != 0){
        total = carry;

        if(it != NULL) total += it -> data *2;

        carry = total / 10;
        int digit = total % 10;

        insertAtHead(doubleNumber, digit);

        if(it != NULL) it = it -> next;
    }

    return doubleNumber;
}

int main() {
    vector<int> nums = {9,9,9};

    ListNode* head = NULL;  
    for(int i = nums.size() - 1; i >= 0; i--){
        insertAtHead(head, nums[i]);
    }
    printLinkedList(head);
    cout << endl;
    

    ListNode* doubledTheNumber = doubleIt(head);
    printLinkedList(doubledTheNumber);
    return 0;
}