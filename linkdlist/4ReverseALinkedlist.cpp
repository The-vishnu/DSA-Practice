#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp -> next = head;
    head = temp;
}

void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout <<" Null";

}

void ReverseLinkedList(Node* &head){
    Node* curr = head;
    Node* nex = NULL;
    Node* prev = NULL;

    while(curr){
        nex = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nex;

        if(curr != NULL) head = curr;
    }
}

int main() {

    vector<int> nodeEle = {1,2,6,3,4,5,6};
    int val = 6;

    Node* head = NULL;

    for(int i = 0; i < nodeEle.size(); i++){
        insertAtHead(head, nodeEle[i]);
    }

    cout << endl;
    printLinkedList(head);

    cout << endl;
    ReverseLinkedList(head);
    printLinkedList(head);
    return 0;
}