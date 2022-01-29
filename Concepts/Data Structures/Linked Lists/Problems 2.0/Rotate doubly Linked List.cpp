#include<bits/stdc++.h>
using namespace std;

typedef struct node{
  int data;
  struct node*next,*prev;
  
  node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
} Node;

class Solution {
public:
    Node *update(Node *start,int p){
        int i=1;
        Node* temp = start;
        while(i<=p){
            temp = temp->next;
            i++;
        }
        
        temp->prev->next = NULL;
        temp->prev = NULL;
        
        Node* n = temp;
        
        while(n->next) n = n->next;
        
        n->next = start;
        start->prev = n;
        
        start = temp;
        
        return start;
        
    }
};

int main(){
    int n,p;
    cin>>n>>p;
    struct node*start = NULL;
    struct node* cur = NULL;
    struct node* ptr = NULL;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ptr=new node(a);
        ptr->data=a;
        ptr->next=NULL;
        ptr->prev=NULL;
        if(start==NULL){
            start=ptr;
            cur=ptr;
        }else{
            cur->next=ptr;
            ptr->prev=cur;
            cur=ptr;
        }
    }
    Solution obj;
    struct node*str=obj.update(start,p);
    while(1){
        cout<<str->data<<" ";
        if(str->next==NULL)break;
        str=str->next;
    }
    while(str!=NULL){
        cout<<str->data<<" ";
        str=str->prev;
    }
}