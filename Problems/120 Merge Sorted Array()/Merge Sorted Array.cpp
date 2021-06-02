#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    for(int p=(m+n-1);p>=0;p--){
    	if( j>=0 && i>=0){
    		if(nums1[i]>=nums2[j]){
            	nums1[p]=nums1[i];
            	nums1[i] = 0;
            	i--;
        	}else{
            	nums1[p] = nums2[j];
           	 	j--;
        	}
		}else if(j<0 && i>=0){
			nums1[p] = nums1[i];
			i--;
		}else{
			nums1[p] = nums2[j];
			j--;
		}
    }
    return 0;
}

int main() {
	vector <int> nums1 = {4,5,6,0,0,0};
	int m = 3;
	vector<int> nums2 = {1,2,3};
	int n = 3;
	merge(nums1,m,nums2,n);
	for(int i=0;i<(m+n);i++) cout<<nums1[i]<<" ";
	return 0;
}
