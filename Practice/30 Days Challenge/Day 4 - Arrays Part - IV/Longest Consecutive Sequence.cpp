// use sets to store unique values
// Use for loop and check for each number whether its previous number present in loop or not
// If not present then use while loop and check the number of consecutive number present in set from this number
// At every time of above case store the max value of lenght

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int maX = 0;
        for(auto i:nums){
            if(!s.count(i-1)){
                int count = 0;
                int n = i;
                while(s.count(n++)) count++;
                maX = max(maX, count);
            }
        }
        return maX;
    }
};