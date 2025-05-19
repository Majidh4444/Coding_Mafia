#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    // int l = prices.size();
    // if(l == 1) return 0;
    // if(l == 2){
    //     return (prices[1]>prices[0])?prices[1]-prices[0]:0;
    // }
    // for(int i=0;i<l-1;i++){
    //      prices[i] = prices[i+1]-prices[i];
    // }
    // int m = prices[0];
    // for(int i=1;i<prices.size()-1;i++){
    //     prices[i] = max(prices[i],(prices[i-1]+prices[i]));
    //     m = max(m,prices[i]);
    // }
    // if(m<=0) return 0;
    // return m;
    
    
    //BEST SOLUTION
    if (prices.size() == 0) return 0;
    int ans = 0;
    int M = prices[0];
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < M) M = prices[i];
        else ans = (prices[i] - M > ans) ? prices[i] - M : ans;
    }
    return ans;
}




int main() {
	vector <int> nums = {3,3,5,0,0,3,1,4};
	int p = maxProfit(nums);
	cout<<p;
	return 0;
}
