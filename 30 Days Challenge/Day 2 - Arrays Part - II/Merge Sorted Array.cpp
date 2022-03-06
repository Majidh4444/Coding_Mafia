// A = 4 5 6 0 0 0
// B = 1 2 3
// Start filling in A from back side by comparing A and B from m-1 and n-1


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int x = m+n-1;
        
        while(x>0 && i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[x] = nums1[i];
                i--;
            }else{
                nums1[x] = nums2[j];
                j--;
            }
            x--;
        }
        
        while(i>=0){
            nums1[x] = nums1[i];
            i--;x--;
        }
        
        while(j>=0){
            nums1[x] = nums2[j];
            j--;x--;
        }
    }
};