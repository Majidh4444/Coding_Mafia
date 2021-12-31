#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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

class Solution{
  public:
    
    void merge(vector<int>& arr, int l, int m, int r){
    	int nl = m-l+1;
    	int nr = r-m;
    	int L[nl],R[nr];
    	
    	for(int i=0;i<nl;i++) L[i] = arr[l+i];
    	for(int i=0;i<nr;i++) R[i] = arr[m+i+1];
    	int i=0,j=0,k=l;
    	while(i<nl && j<nr){
    		if(L[i]<R[j]){
    			arr[k] = L[i];
    			i++;
    		}else{
    			arr[k] = R[j];
    			j++;
    		}
    		k++;
    	}
    
    	while(i<nl){
    		arr[k] = L[i];
    		i++;k++; 
    	}
    	while(j<nr){
    		arr[k] = R[j];
    		j++;k++;
    	}
    }
    
    void mergeSort(vector<int>& arr, int l, int r){
    	if(l<r){
    		int mid = l + ((r-l)/2);
    		mergeSort(arr,l,mid);
    		mergeSort(arr,mid+1,r);
    		merge(arr,l,mid,r);
    	}
    }
    
    Node* mergeSort(Node* head) {
        vector<int> v;
        
        Node* temp = head;
        
        while(temp){
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        mergeSort(v,0,v.size()-1);
        
        temp = head;
        
        for(int i=0;i<v.size();i++){
            temp->data = v[i];
            temp = temp->next;
        }
        return head;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    struct Node* a = NULL;
    long n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        push(&a, tmp);
    }
    Solution obj;
    a = obj.mergeSort(a);
    printList(a);
    return 0;
}