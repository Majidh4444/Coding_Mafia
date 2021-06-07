#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;




bool isPalindrome(string s) {
    int i=0;
    int j = s.length()-1;
    while(i<j){
        if(!(isalnum(s[i]))) i++;
        if(!(isalnum(s[j]))) j--;
        if((isalnum(s[i])) && (isalnum(s[j]))){
            if(tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }
    }
    return true;
}

int main() {
	cout<<"Enter the String:"<<endl;
	string S;
	cin>>S;
	cout<<isPalindrome(S);
	return 0;
}
