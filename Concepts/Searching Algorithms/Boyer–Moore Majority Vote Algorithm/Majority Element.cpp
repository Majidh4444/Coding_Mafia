#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size){
        int count = 0;
        int temp = 0;
        
        for(int i=0;i<size;i++){
            if(count == 0) temp = a[i];
            
            if(temp == a[i]) count++;
            else count--;
        }
        
        int occurence = 0;
        
        for(int i=0;i<size;i++){
            if(a[i] == temp) occurence++;
        }
        
        if(occurence > size/2) return temp;
        else return -1;
        
    }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.majorityElement(arr, n);

    return 0;
}