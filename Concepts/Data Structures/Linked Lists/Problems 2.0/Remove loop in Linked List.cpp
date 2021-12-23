#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position){
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head){
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow){
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head){
    int ret = 0;
    while(head){
        ret++;
        head = head->next;
    }
    return ret;
}

class Solution{
    public:
    void removeLoop(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        
        // Using this while loop find the loop in list  
        while(1){
            if(slow == NULL || fast == NULL) break;
            prev = slow;
            slow = slow->next;
            if(fast->next) fast = fast->next->next;
            else break;
            if(fast == slow) break;
        }
        
        // If there is no loop
        if(slow != fast) return;
        
        // If there is a loop
        fast = head;
        //Check this on paper
        while(slow != fast){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        
        prev->next = NULL;
        
    }
};

int main(){
    int n, num;
    cin>>n;
    
    Node *head, *tail;
    cin>> num;
    head = tail = new Node(num);
    
    for(int i=0 ; i<n-1 ; i++){
        cin>> num;
        tail->next = new Node(num);
        tail = tail->next;
    }
    
    int pos;
    cin>> pos;
    loopHere(head,tail,pos);
    
    Solution ob;
    ob.removeLoop(head);
    
    if( isLoop(head) || length(head)!=n )cout<<"0";
    else cout<<"1";
	return 0;
}