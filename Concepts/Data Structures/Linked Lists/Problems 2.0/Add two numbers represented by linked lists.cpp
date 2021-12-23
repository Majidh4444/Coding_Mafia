#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size){
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++){
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n){
    while(n){
        cout<< n->data << " ";
        n = n->next;
    }
}

class Solution{
    public:
    struct Node* reverselist(struct Node* head){
        struct Node* prev = NULL;
        struct Node* current = head;
        struct Node* nxt = head->next;
        
        while(1){
            nxt = current->next;
            current->next = prev;
            prev = current;
            current = nxt;
            if(!current) break;
            nxt = current->next;
        }
        return prev;
    }
    
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second){
        first = reverselist(first);
        second = reverselist(second);
        
        struct Node* head = new Node(0);
        struct Node* temp = head;
        
        int r = 0,s;
        
        while(first || second){
            s = 0;
            if(first) s += first->data;
            if(second) s += second->data;
            s += r;
            
            if(s>9){
                r = 1;
                s = s%10;
            }else r = 0;
            
            temp->next = new Node(s);
            temp = temp->next;
            
            if(first) first = first->next;
            if(second) second = second->next;
        }
        
        if(r > 0) temp->next = new Node(r);
        
        head = reverselist(head->next);
        return head;
    }
};

int main(){
    int n, m;
    
    cin>>n;
    Node* first = buildList(n);
    
    cin>>m;
    Node* second = buildList(m);
    Solution ob;
    Node* res = ob.addTwoLists(first,second);
    printList(res);
    return 0;
}