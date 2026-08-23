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
    

    displayList(head);

    return 0;
}