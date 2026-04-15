#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class L1{
    public:
    int val;
    L1* next;

    L1(int x){
        val = x;
        next = NULL;
    }
};

class L2{
    public:
    int val;
    L2* next;

    L2(int x){
        val = x;
        next = NULL;
    }
};

void insertAtHead(L1* &head, int val){
    L1* newNode = new L1(val);
    newNode->next = head;
    head = newNode;
}

void insertAtHead(L2* &head, int val){
    L2* newNode = new L2(val);
    newNode->next = head;
    head = newNode;
}

void printList(L1* head){
    L1* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printList(L2* head){
    L2* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void addTwoNumbers(L1* l1, L2* l2){

    L1* prev = new L1(0);
    L1* dummy = prev;

    

    


}

int main() {
    vector<int> nums1 = {2,4,3};
    vector<int> nums2 = {5,6,4};
    L1* head1 = NULL;
    L2* head2 = NULL;
    for(int i = nums1.size() - 1; i >= 0; i--){
        insertAtHead(head1, nums1[i]);
    }
    for(int i = nums2.size() - 1; i >= 0; i--){
        insertAtHead(head2, nums2[i]);
    }

    printList(head1);
    printList(head2);

    cout << endl;
    addTwoNumbers(head1, head2);
    printList(head1);


    return 0;
}