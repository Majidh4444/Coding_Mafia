// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.

//s1>=(totalSum)
//s1+s2=totalSum
//s1-s2=d
//s1-(totalSum-s1) = d
//2s1 = d+totalSum

//s1<(totalSum)
//s1+s2=totalSum
//s2-s1=d
//(totalSum-s1)-s1 = d
//2s1 = totalSum-d

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = 0;
        
        for(int i=0;i<nums.size();i++) totalSum+=nums[i];
        if(totalSum<target) return 0;
        if(((totalSum-target)%2 != 0) && ((totalSum+target)%2 != 0)) return 0; 
        
        
        int sum = ((totalSum+target)%2 == 0)?((totalSum+target)/2):((totalSum-target)/2);
        vector<vector<int>> DP(nums.size()+1,vector<int>(sum+1,0));
        for(int n=0;n<=nums.size();n++) DP[n][0] = 1;
        for(int s=1;s<=sum;s++) DP[0][s] = 0;
        for(int n=1;n<=nums.size();n++){
            for(int s=0;s<=sum;s++){
                if(s>=nums[n-1]) DP[n][s] = DP[n-1][s-nums[n-1]] + DP[n-1][s];
                else DP[n][s] = DP[n-1][s];
            }
        }
        // cout<<"s-";
        // for(int s=0;s<=sum;s++) cout<<s<<" ";
        // cout<<endl;
        // for(int n=0;n<=nums.size();n++){
        //     cout<<n<<"-";
        //     for(int s=0;s<=sum;s++) cout<<DP[n][s]<<" ";
        //     cout<<endl;
        // }
        return DP[nums.size()][sum];
    }
};

//INPUT:
//[0,0,0,0,0,0,0,0,1]
//1
//OUTPUT:
//256

