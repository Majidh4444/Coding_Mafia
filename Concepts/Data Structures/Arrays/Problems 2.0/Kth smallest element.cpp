#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> p;
        
        for(int i=0;i<=r;i++){
            p.push(arr[i]);
            if(p.size() > k){
                p.pop();
            }
        }
        return p.top();
    }
};
 
int main(){
    int number_of_elements;
    cin>>number_of_elements;
    int a[number_of_elements];
    
    for(int i=0;i<number_of_elements;i++)
        cin>>a[i];
        
    int k;
    cin>>k;
    Solution ob;
    cout<<ob.kthSmallest(a, 0, number_of_elements-1, k);
    return 0;
}