#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size){
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++){
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    Node* head1 = inputList(n1);
    Node* head2 = inputList(n2);
    Node* common = inputList(n3);
    
    Node* temp = head1;
    while(temp!=NULL && temp->next != NULL)
        temp = temp->next;
    if(temp!=NULL) temp->next = common;
    
    temp = head2;
    while(temp!=NULL && temp->next != NULL)
        temp = temp->next;
    if(temp!=NULL) temp->next = common;
    
    cout << intersectPoint(head1, head2);
    return 0;
}

int intersectPoint(Node* head1, Node* head2){
    while(head1){
        if(head1->data == 0) head1->data = 1001;
        else head1->data *= 10000;
        head1 = head1->next;
    }
    
    while(head2){
        if(head2->data >= 10000 || head2->data <= -10000) return (head2->data)/10000;
        else if(head2->data == 1001) return 0;
        head2 = head2->next;
    }
    return -1;
}

