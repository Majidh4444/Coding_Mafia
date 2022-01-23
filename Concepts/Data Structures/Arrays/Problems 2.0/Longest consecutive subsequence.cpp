#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int N){
        unordered_set<int> s;
        for(int i=0;i<N;i++) s.insert(arr[i]);
        
        int maxLength = 0;
        
        for(int i=0;i<N;i++){
            if(s.find(arr[i]-1) == s.end()){
                int j = arr[i];
                while(s.find(j) != s.end()) j++;
                maxLength = max(maxLength, j-arr[i]);
            }
        }
        return maxLength;
    }
};

int main(){
	int  n,i,a[100001];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	Solution obj;
	cout<<obj.findLongestConseqSubseq(a, n);
    return 0;
}