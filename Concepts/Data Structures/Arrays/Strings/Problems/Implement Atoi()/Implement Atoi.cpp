#include <bits/stdc++.h>
using namespace std;

int atoi(string str){
    int ans = 0;
    int d = 1,n=0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i] == '-') return -1*ans;
        n = (((int)str[i])-48);
        if(n < 0 || n > 9) return -1;
        ans += d*n;
        d *= 10;
    }
    return ans;
}

int main(){
	string S;
	cout<<"Enter the string to chnage to integer: ";
	getline(cin,S);
	cout<<atoi(S);
	return 0;
}

