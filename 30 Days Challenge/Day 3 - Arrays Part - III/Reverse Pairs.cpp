// Same as majority elements, but here use extra array for squares in merge function to check pairs


class Solution {
public:
    
    int merge(vector<int>& nums, int l, int m, int r){
        int pairs = 0;
        int nl = m-l+1;
        int nr = r-m;
        
        vector<int> L(nl, 0);
        vector<int> R(nr, 0);
        vector<long long> rS(nl, 0);
        
        for(int i=0;i<nl;i++) L[i] = nums[l+i];
        for(int i=0;i<nr;i++){
            R[i] = nums[m+i+1];
            rS[i] = (long long)2*nums[m+i+1];
        }
        
        int i=0,j=0,k=l;
        
        while(i<nl && j<nr){
            if(L[i] > rS[j]){
                j++;
                pairs += nl-i;
            }
            else i++;
        }
        
        i=0,j=0;
        
        while(i<nl && j<nr){
            if(L[i] > R[j]) nums[k++] = R[j++];
            else nums[k++] = L[i++];
        }
        
        while(i<nl) nums[k++] = L[i++];
        while(j<nr) nums[k++] = R[j++];
        
        return pairs;
    }

    int mergeSort(vector<int>& nums, int l, int r){
        int pairs = 0;
        if(l<r){
            int mid = (l+(r-l)/2);
            pairs += mergeSort(nums, l, mid);
            pairs += mergeSort(nums, mid+1, r);
            pairs += merge(nums, l, mid, r);
        }
        return pairs;
    }
    
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);

    }
};