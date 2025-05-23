#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    
}*start;

void insert();
void display(struct Node *head);

struct Node* reverseList(struct Node *head){
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* nxt = head->next;
    
    
    while(current){
        nxt = current->next;
        current->next = prev;
        prev = current;
        current = nxt;
    }
    
    return prev;
}

int main(){
    start=NULL;
    insert();
    start = reverseList(start);
    display(start);
    printf("\n");
    return 0;

}


void insert(){
     int n,value,i;
     scanf("%d",&n);
     struct Node *temp;
     for(i=0;i<n;i++){
         scanf("%d",&value);
         if(i==0){
              start=(struct Node *) malloc( sizeof(struct Node) );
              start->data=value;
              start->next=NULL;
              temp=start;
              continue;
         }else{
             temp->next= (struct Node *) malloc( sizeof(struct Node) );
             temp=temp->next;
             temp->data=value;
             temp->next=NULL;
         }
     }
 }
 
void display(struct Node *head){
   while(head!=NULL){
   printf("%d ",head->data);
    head=head->next;
  }
}
