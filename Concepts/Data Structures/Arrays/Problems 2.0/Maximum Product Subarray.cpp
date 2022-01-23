#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
	    long long ans = arr[0];
	    long long maX = ans;
	    long long miN = ans;
	    
	    for(int i=1;i<n;i++){
	        if(arr[i] < 0){
	            swap(maX, miN);
	        }
	        maX = max((long long)arr[i], maX*(long long)arr[i]);
	        miN = min((long long)arr[i], miN*(long long)arr[i]);
	        ans = max(ans, maX);
	    }
	    return ans;
	}
};

int main(){
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.maxProduct(arr, n);
    cout << ans;
    return 0;
}