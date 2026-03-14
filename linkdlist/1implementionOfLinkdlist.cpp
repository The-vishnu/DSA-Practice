#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next = NULL;

    public:
    Node(int data = 0){
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtTail(Node* &tail, int val){
    Node* temp = new Node(val);
    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp -> next = head;
    head = temp;
}

void displayList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data <<" -> ";
        temp = temp -> next;
    }

    cout <<" Null ";
}

int main() {
    Node* head = new Node(1);
    Node* tail = head;

    // cout <<"Enter the number of nodes: ";
    // cin >> n;
    insertAtTail(tail, 11);
    insertAtHead(head, 12);
    insertAtHead(head, 9);
    insertAtTail(tail, 10);
    insertAtHead(head, 3);
    // insertAtHead(node1, 3);
    // insertAtHead(node1, 4);
    // insertAtHead(node1, 1);

    // insertAtTail(node1, 11);

    displayList(head);

    return 0;
}