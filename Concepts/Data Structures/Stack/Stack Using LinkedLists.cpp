#include <bits/stdc++.h>
using namespace std;
 
// A structure to represent a stack
struct StackNode {
    int data;
    StackNode* next;
};
 

//CreateNode
StackNode* createNode(int data){
    StackNode* newNode = new StackNode();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
 
 
//Check stack if Empty
int isEmpty(StackNode* root){   					//O(1)
    return !root;
}
 
 
//Push Node to Stack
void push(StackNode** root, int data){				//O(1)
    StackNode* newNode = createNode(data);
    newNode->next = *root;
    *root = newNode;
    cout << data << " pushed to stack\n";
}


//Pop Node out of Stack
int pop(StackNode** root){							//O(1)
    if (isEmpty(*root))
        return INT_MIN;
    StackNode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}
 
 
//Returns data of top Node in Stack
int peek(StackNode* root){							//O(1)
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}
 
// Driver code
int main(){
    StackNode* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    cout << pop(&root) << " popped from stack\n";
 
    cout << "Top element is " << peek(root) << endl;
     
    cout<<"Elements present in stack : ";
     //print all elements in stack :
    while(!isEmpty(root)){
        // print top element in stack
        cout<<peek(root)<<" ";
        // remove top element in stack
        pop(&root);
    }
 
    return 0;
}
