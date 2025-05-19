#include<bits/stdc++.h>
using namespace std;



vector<string> buildArray(vector<int>& target, int n) {
    int i=0,a=1;
    vector<string> v;
    while(i<target.size()){
        if(target[i] == a){
            v.push_back("Push");
            i++;
            a++;
        }else{
            v.push_back("Push");
            v.push_back("Pop");
            a++;
        }
    }
    return v;
}

int main() {
	vector<int> v = {2,3,4};
	int n = 4;
	vector<string> s;
	s = buildArray(v,n);
	for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
    return 0;
}
