#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n){   
        unordered_map<int,int> m;
        int max_length = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += A[i];
            if(sum == 0) max_length = i+1;
            else if(m.find(sum) == m.end()) m[sum] = i;
            else max_length = max(max_length, i-m[sum]);
        }
        
        return max_length;
    }
};

int main(){
	int m;
	cin>>m;
	vector<int> array1(m);
	for (int i = 0; i < m; ++i){
		cin>>array1[i];
	}
	Solution ob;
	cout<<ob.maxLen(array1,m);
    return 0; 
}