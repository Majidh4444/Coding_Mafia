#include<bits/stdc++.h>
using namespace std;



vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v(nums1.size(), -1);
    stack<int> st;
    map<int, int> m;
    
    for(int i=0;i<nums2.size();i++){
        while(!st.empty() && nums2[i] > st.top()){
            m[st.top()] = nums2[i];
            st.pop();
        }
        st.push(nums2[i]);
    }
    
    for(int i=0;i<nums1.size();i++){
        if(m.find(nums1[i]) != m.end()){
            v[i] = m[nums1[i]];
        }
    }
    return v;
}

int main() {
	vector<int> nums1 = {4,1,2};
	vector<int> nums2 = {1,3,4,2};
	vector<int> v = nextGreaterElement(nums1,nums2);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}
