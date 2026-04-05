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

void RemoveElement(Node* &head, int val){
    
    Node* temp = head;
    while(temp && temp -> data == val){
        head = head -> next;
        delete temp;
        temp = head;
    }
    
    Node* curr = head;
    Node* prev = NULL;
    while(curr){

        if(curr -> data == val){
            Node* temp = curr;
            prev -> next = curr -> next;
            curr = curr -> next;
            delete temp;

        }
        else{
            prev = curr;
            curr = curr -> next;
        }
    }
}

int main() {
    vector<int> nodeEle = {1,2,6,3,4,5,6};
    int val = 6;

    Node* head = NULL;

    for(int i = 0; i < nodeEle.size(); i++){
        insertAtHead(head, nodeEle[i]);
    }

    RemoveElement(head, val);

    printLinkedList(head);
    return 0;
}