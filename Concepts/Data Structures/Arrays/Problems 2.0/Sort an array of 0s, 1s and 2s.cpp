#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void sort012(int arr[], int n){
        int zeroes = 0, ones = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i] == 0) zeroes++;
            else if(arr[i] == 1) ones++;
        }
        
       for(int i=0;i<n;i++){
            if(i<zeroes) arr[i] = 0;
            else if(i < zeroes+ones) arr[i] = 1;
            else arr[i] = 2;
        }  
    }
};

int main() {
    int n;
    cin >>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    for(int i=0;i<n;i++){
        cout << a[i]  << " ";
    }
    return 0;
}