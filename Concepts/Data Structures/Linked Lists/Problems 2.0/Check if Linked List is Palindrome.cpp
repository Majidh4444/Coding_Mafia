#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{
  public:
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* current = head;
        Node* nxt = head->next;
        
        while(current){
            nxt = current->next;
            current->next = prev;
            prev = current;
            current = nxt;
            if(!current) break;
            nxt = nxt->next;
        }
        return prev;
    }
    
    bool isPalindrome(Node *head){
        Node* head1 = head;
        if(!head->next) return true;
        if(!head->next->next){
            if(head->data != head->next->data) return false;
            return true;
        }
        
        Node* mid = head;
        int n = 1;
        while(head){
            if(n!=1 && n%2 == 1)  mid = mid->next;
            n++;
            head = head->next;
        }
        Node* head2 = mid->next;
        mid->next = NULL;
        
        head1 = reverse(head1);
        if(n%2 == 0) head1 = head1->next;
    
        while(head1){
            if(head1->data != head2->data) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return true;
        
    }
};

int main(){
  int i,n,l,firstdata;
    struct Node *head = NULL,  *tail = NULL;
    cin>>n;
    cin>>firstdata;
    head = new Node(firstdata);
    tail = head;
    for(i=1;i<n;i++){
        cin>>l;
        tail->next = new Node(l);
        tail = tail->next;
    }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    return 0;

}