#include <bits/stdc++.h>
using namespace std;

string encode(string src){
    int c = 1;
    string ans = "";
    for(int i=0;i<src.size();i++){
        if(src[i] != src[i+1]){
            ans += src[i];
            ans += (to_string(c));
            c = 1;
        }else c++;
    }
    return ans;
}

int main(){
	string S;
	cout<<"Enter the string encode: ";
	getline(cin,S);
	cout<<encode(S);
	return 0;
}

