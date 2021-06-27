#include <bits/stdc++.h>
using namespace std;
 
int minJumps(int arr[], int n){
    int maxReach = arr[0];
    int remainingSteps = arr[0];
    int jumps = 1;
    if(n == 1) return 0;
    else if(arr[0] == 0) return -1;
    else{
        for(int i=1;i<n;i++){
            //cout<<"MR:"<<maxReach<<" "<<"RS:"<<remainingSteps<<" "<<"J:"<<jumps<<endl;
            if(i == n-1) return jumps;
            maxReach = max(maxReach,i+arr[i]);
            remainingSteps--;
            if(remainingSteps == 0){
                jumps++;
                if(i >= maxReach) return -1;
                remainingSteps = maxReach - i;
            }
        }
    }
}

int main(){
    int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach the end is " << minJumps(arr, n);
    return 0;
}




