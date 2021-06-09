#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;


bool isSubsequence(string s, string t) {
    auto it = t.begin()-1;
    for(int i=0;i<s.length();i++){
        it = find(it+1,t.end(),s[i]);
        if(it == t.end()) return false;
    }
    return true;
}

int main() {
	string s,t;
	cout<<"Enter s and t strings:"<<endl;
	cin>>s>>t;
	cout<<isSubsequence(s,t);
	return 0;
}
