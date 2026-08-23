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

Node* partitionList(Node* &head, int x){
    Node* curr = head;

    Node* tl = new Node(0);
    Node* left = tl;

    Node* tr = new Node(0);
    Node* right = tr;

    while(curr != NULL){
        if(curr -> data < x){
            if(tl -> next == NULL){
                tl -> next = curr;
            }
            left -> next = curr;
            left = left -> next;
        }
        else {
            if(tr -> next == NULL){
                tr -> next = curr;
            }
            right -> next = curr;
            right = right -> next;
        }

        curr = curr -> next;
    }

    left -> next = tr -> next;
    right -> next = NULL;

    return tl -> next;


}

int main() {
    Node* head = new Node(1);
    Node* tail = head;
    
    vector<int> arr = {1, 4, 3, 2, 5, 2};
    int x = 3;

    for(int i = 1; i < arr.size(); i++){
        insertAtTail(tail, arr[i]);
    }
    displayList(head);

    cout << endl;
    head = partitionList(head, x);
    displayList(head);

    return 0;
}