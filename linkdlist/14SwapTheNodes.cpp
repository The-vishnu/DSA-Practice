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

ListNode* swapNodes(ListNode* head, int k){
    if(head == NULL || head -> next == NULL) return head;

    ListNode* dummy = new ListNode(-1);
    dummy -> next = head;
    ListNode* it = head; 
    int sz = 0;

    while(it){
        sz++;
        it = it -> next;
    }

    ListNode* first = head;
    ListNode* firstPrev = dummy;

    for(int i = 1; i < k; i++){
        firstPrev = first;
        first = first -> next;
    }
    ListNode* firstNxt = first -> next;

    ListNode* second = head;
    ListNode* secondPrev = NULL;

    for(int i = 1; i < sz - k+1; i++){
        secondPrev = second;
        second = second -> next;
    }
    ListNode* secondNxt = second -> next;

    if(first == second) return dummy -> next;

    if(first -> next == second){
        firstPrev -> next = second;
        first -> next = secondNxt;
        second -> next = first;
    }
    else if(second -> next == first){
        if(secondPrev) secondPrev -> next = first;
        else dummy -> next = first;
        second -> next = firstNxt;
        first -> next = second;
    }
    else{
        firstPrev -> next = second;
        second -> next = firstNxt;
        
        if(secondPrev) secondPrev -> next = first;
        else dummy -> next = first;

        first -> next = secondNxt;
    }



    return dummy -> next;
}


int main() {
    vector<int> nodeEle = {1, 2, 3, 4, 5};
    int k = 1;

    ListNode* head = NULL;  
    for(int i = nodeEle.size() - 1; i >= 0; i--){
        insertAtHead(head, nodeEle[i]);
    }
    printLinkedList(head);
    cout << endl;
    ListNode* newHead = swapNodes(head, k);
    printLinkedList(newHead);
    return 0;
}