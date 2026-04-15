#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

void insertAtHead(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
}

void printList(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2, int a, int b){
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    ListNode* it = list1;
    ListNode* left = NULL;
    ListNode* right = NULL;

    int pos = 0;
    while( it ){
        if(pos == a-1){
            left = it;
        }
        if(pos == b+1){
            right = it;
            break;
        }
        it = it -> next;
        pos++;
    }

    ListNode* tail = list2;
    while(tail -> next){
        tail = tail -> next;
    }

    left -> next = list2;
    tail -> next = right;

    return list1;
    
}

int main() {
    vector<int> list1 = {0,1,2};
    vector<int> list2 = {1000000};

    ListNode* head1 = NULL;
    for(int i = list1.size() - 1; i >= 0; i--){
        insertAtHead(head1, list1[i]);
    }
    ListNode* head2 = NULL;
    for(int i = list2.size() - 1; i >= 0; i--){
        insertAtHead(head2, list2[i]);
    }   
    printList(head1);
    printList(head2);

    ListNode* mergedHead = mergeTwoLists(head1, head2, 3, 3);
    printList(mergedHead);
    return 0;
}