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

void deleteFromHead(Node* &head, Node* &tail){
    if(head == NULL) return;

    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }

    Node* temp = head;
    head = head -> next;
    delete temp;
}

void insertAtTail(Node* &tail, int val){
    Node* temp = new Node(val);
    tail -> next = temp;
    tail = temp;
}

void deleteFromTail(Node* &head, Node* &tail){
    if(head == NULL) return;
    if(head == tail){
        delete head;
        head = tail = NULL;
        return;
    }
    else{

        Node* curr = head;
        Node* prev = NULL;
    
        while(curr -> next != NULL){
            prev = curr;
            curr = curr -> next;
        }
    
        delete curr;
        prev -> next = NULL;
        tail = prev;
    }

}

void insertAtPosition(Node* &head, Node* &tail, int pos, int val){
    if(pos == 1){
        insertAtHead(head, val);
        return;
    }
    
    int cnt = 1;
    Node* it = head;

    while(cnt < pos - 1 && it != NULL){
        it = it -> next;
        cnt++;
    }

    if(it == NULL) return;
    if(it -> next == NULL){
        insertAtTail(tail, val);
        return;
    }

    Node* temp = new Node(val);
    temp -> next = it -> next;
    it -> next = temp;
}

void deleteAtPosition(Node* &head, Node* &tail, int pos, int val){

    if(head == NULL) return;
    if(pos == 1){
        if(head -> next == NULL){
            Node* temp = head;
            delete temp;
            head = tail = NULL;
            return;  
        }
        else{
            Node* temp = head;
            delete temp;
            head = head -> next;
        }
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < pos && curr != NULL){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        if(curr -> next != NULL){
            prev -> next = curr -> next;
            delete curr;
            return;
        }
        else if(curr -> next == NULL){
            prev -> next = NULL;
            tail = prev;
        }
    }
}


void printLinkedList(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout <<" Null";
}