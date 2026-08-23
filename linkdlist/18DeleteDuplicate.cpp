#include <iostream>
#include <bits/stdc++.h>
#include "2ImplementationOfLinkedlistpart2.cpp"
using namespace std;
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

Node* deleteDuplicate(Node* &head){
    Node* dummy = new Node(0);
    Node* prev = dummy;
    Node* curr = head;

    dummy -> next = head;

    while(curr != NULL){
        while(curr -> next != NULL && curr -> data == curr -> next -> data){
            curr = curr -> next;
        }

        if(prev -> next == curr) prev = prev -> next;
        else prev -> next = curr -> next;

        curr = curr -> next;
    }

    return dummy -> next;


}

int main() {
   vector<int> nodeEle = {1, 2, 3, 4, 5};

    Node* head;
    Node* tail;
    tail = head = new Node(nodeEle[0]);

    for(int i = 1; i < nodeEle.size(); i++){
        insertAtTail(tail, nodeEle[i]);
    }
    cout << endl;
    printLinkedList(head);

    cout << endl;
    head = deleteDuplicate(head);
    printLinkedList(head);
    return 0;
}