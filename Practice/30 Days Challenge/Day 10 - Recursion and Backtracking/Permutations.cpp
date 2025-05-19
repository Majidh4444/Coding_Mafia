// 1 2 3
// For i = 0 => (1)-2 3
//    (rec) i = 0   (1 2)-3
//         (rec) i = 0  (1 2 3)
//          i = 1   (1 3)-2
//         (rec) i = 0  (1 3 2)
//     i = 1    (2)-1 3
//    (rec) i = 0   (2 1)-3
//         (rec) i = 0  (2 1 3)
//          i = 1   (2 3)-1
//         (rec) i = 0   (2 3 1)
//     i = 2    (3)-1 2
//    (rec) i = 0    (3 1)-2
//         (rec) i = 0   (3 1 2)
//          i = 1    (3 2)-1
//         (rec) i = 0   (3 2 1)   
// Make recursion as above
// for(int i=0;i<nums.size();i++){
//     vector<int> arr = nums;
//     arr.erase(arr.begin()+i);
//     s.push_back(nums[i]);
//     rec(arr,v,s);
//     s.pop_back();
// } 


class Solution {
public:
    void rec(vector<int> nums, vector<vector<int>>& v, vector<int> s){
        if(nums.size() == 0){
            v.push_back(s);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            vector<int> arr = nums;
            arr.erase(arr.begin()+i);
            s.push_back(nums[i]);
            rec(arr,v,s);
            s.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        rec(nums, v,{});
        return v;
    }
};