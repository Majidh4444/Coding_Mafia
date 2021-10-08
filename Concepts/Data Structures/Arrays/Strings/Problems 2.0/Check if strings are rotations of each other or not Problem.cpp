#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool areRotations(string s1,string s2){
        int l1 = s1.size();
        int l2 = s2.size();
        
        if(l1!=l2) return false;
        if(s1 == s2) return true;
        
        queue<char> Q1,Q2;
        
        for(int i=0;i<l1;i++){
            Q1.push(s1[i]);
            Q2.push(s2[i]);
        }
        
        while(l1--){
            if(Q1==Q2) return true;
            Q2.push(Q2.front());
            Q2.pop();
        }
        
        return false;
    }
};

int main(){
	string s1;
	string s2;
	cin>>s1>>s2;
	Solution obj;
	cout<<obj.areRotations(s1,s2);
    return 0;
}