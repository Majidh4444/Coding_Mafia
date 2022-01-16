#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps = 1;
        int steps = arr[0];
        int maxR = arr[0];
        
        if(n==1) return 0;
        else if(arr[0] == 0) return -1;
        else{
            //* Here we are starting from 0th index, equating steps, jumps and maxR accordingly
            for(int i=1;i<n;i++){
                if(i == n-1) return jumps;
                //* maxR is some thing which we can reach from the values which we iterated till now
                maxR = max(maxR, i+arr[i]);
                //* Reducing each step every time
                steps--;
                if(steps == 0){
                    //* If steps are 0 then we hve to jump
                    jumps++;
                    //* When we get 0 value at index then we get this condition
                    if(i>=maxR) return -1;
                    //* Steps are to be calculated to reach next maxR as we only jump to max reach index
                    steps = maxR-i;
                }
            }
        }
        return jumps;
    }
};

int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    Solution obj;
    cout<<obj.minJumps(arr, n);
    return 0;
}