// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int findDiameter(Node* root, int* d){
        if(!root) return 1;
        int a = findDiameter(root->left,d);
        int b = findDiameter(root->right,d);
        if(*d < (a+b)) *d = a+b;
        return max(a,b)+1;
    }
    
    int diameter(Node* root) {
        int d = 0;
        findDiameter(root,&d);
        return d-1;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends

//Input:
//1
//1 2 3 N N 4 6 N 5 N N 7 N
//Output:
//6
