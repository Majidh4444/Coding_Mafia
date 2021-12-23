#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root){
    Node *temp = root;
    while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}

class Solution{
    public:
    Node * removeDuplicates( Node *head){
     unordered_set<int> s;
     Node* temp = head;
     while(temp->next){
         if(s.find(temp->data) == s.end()) s.insert(temp->data);
         if(s.find(temp->next->data) != s.end()) temp->next = temp->next->next;
         else temp = temp->next;
     }
     return head;
    }
};

int main() {
    int K;
    cin>>K;
    struct Node *head = NULL;
    struct Node *temp = head;

    for(int i=0;i<K;i++){
    int data;
    cin>>data;
        if(head==NULL) head=temp=new Node(data);
        else{
            temp->next = new Node(data);
            temp=temp->next;
        }
    }
    
    Solution ob;
    Node *result  = ob.removeDuplicates(head);
    print(result);
	return 0;
}