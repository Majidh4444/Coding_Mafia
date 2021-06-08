#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



int balancedStringSplit(string s) {
    int i=0,r=0,l=0,ans=0;
    while(i<s.length()){
        if(s[i] == 'R') r++;
        else l++;
        if(r==l){
            ans++;
            r=0;
            l=0;
        }
        i++;
    }
    return ans;
}

int main() {
	string s;
	cout<<"Enter the string which has equal number of 'R and 'L':"<<endl;
	cin>>s;
	cout<<balancedStringSplit(s);
	return 0;
}
