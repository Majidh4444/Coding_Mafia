#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) { 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
}

class Solution{
    public:
    Node* addOne(Node *head){
        if(head->next == NULL){
            head->data += 1;
            return head;
        }
        
        addOne(head->next);
        
        int carry = 0;
        if(head->next->data > 9){
            carry = head->next->data/10;
            head->next->data = head->next->data%10;
        }
        
        head->data += carry;
        return head;
    }
};

int main() { 
    string s;
    cin>>s;
    
    Node* head = new Node( s[0]-'0' );
    Node* tail = head;
    for(int i=1; i<s.size(); i++)
    {
        tail->next = new Node( s[i]-'0' );
        tail = tail->next;
    }
    Solution ob;
    head = ob.addOne(head);
    printList(head); 
    return 0; 
}