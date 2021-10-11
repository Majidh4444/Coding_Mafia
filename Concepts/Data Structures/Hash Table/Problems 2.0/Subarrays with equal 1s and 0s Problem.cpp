#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n){        
        for(int i=0;i<n;i++){
            if(arr[i] == 0) arr[i] = -1;
        }
        
        unordered_map<int,int> m;
        int t = 0;
        int sum = 0;
        long long int count = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == 0) count++;
            if(m.find(sum) == m.end()) m[sum] = 1;
            else{
                count += m[sum];
                m[sum]++;
            }
        }
        return count;
    }
};

int main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution obj;
	cout<< obj.countSubarrWithEqualZeroAndOne(arr, n);
	return 0;
}