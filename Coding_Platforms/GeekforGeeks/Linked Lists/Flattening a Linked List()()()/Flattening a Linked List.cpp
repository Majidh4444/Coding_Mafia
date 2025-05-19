#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	return 0;
}
// } Driver Code Ends


/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

Node *flatten(Node *root){
    Node* temp = root;
    Node* b;
    priority_queue<int, vector<int>, greater<int>> p;
    while(temp){
        b = temp;
        while(b){
            p.push(b->data);
            b = b->bottom;
        }
        temp = temp->next;
    }
    int d = p.top();
    temp = new Node(d);
    Node* ans = temp;
    p.pop();
    while(!p.empty()){
        d = p.top();
        b = new Node(d);
        temp->bottom = b;
        temp = temp->bottom;
        p.pop();
    }
    return ans;
}



//Input Format:
//First line contains an integer N denoting the number of head nodes connected to each other.
//Second line contains N space separated numbers (M1, M2...Mn) denoting number of elements in 
//linked lists starting with each head.
//Third line of each test case contains all the elements of the linked list starting with 1st 
//head node and covering all the elements through its down pointer, then 2nd head node and 
//covering all its elements through down pointer and so on till the last head node of the linked list
//
//Input:
//4 
//4 2 3 4                  
//5 7 8 30 10 20 19 22 50 28 35 40 45
//Output:
//5 7 8 10 19 20 22 28 30 35 40 45 50
