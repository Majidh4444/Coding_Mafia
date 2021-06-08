#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



int lengthOfLastWord(string s) {
    int i = s.length()-1;
    if(i == 0 && s[i] == ' ') return 0;
    if( i == 0) return 1;
    while(i>=0 && s[i] == ' ') i--;
    int ans=0;
    while(i>=0 && s[i] != ' '){
        i--;
        ans++;
    }
    return ans;
}

int main() {
	string s;
	cout<<"Enter the string:"<<endl;
	cin>>s;
	cout<<lengthOfLastWord(s);
	return 0;
}
