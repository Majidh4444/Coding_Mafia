// 7 1 5 3 6 4
// 7
//  \             6
//   \       5   / \
//    \     / \ /   4
//     \   /   3
//      \ /
//       1
// Chose min stock price than previous one
// if its is greater than previous one check profit and compare with maxProfit => (5-1), (3-1), (6-1), (4-1) => max is (6-1 = 5)
// 5 is max profit

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int price = prices[0];
        for(int i=1;i<n;i++){
            if(prices[i] < price) price = prices[i];
            else{
                maxProfit = max(maxProfit, prices[i]-price);
            }
        }
        return maxProfit;
    }
};