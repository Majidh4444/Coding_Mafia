#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



  bool isPal(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

 bool validPalindrome(string s) {
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return isPal(s,i+1,j) || isPal(s,i,j-1);   
        }
        i++;
        j--;
        
    }
    return true;
}

int main() {
	string s;
	cout<<"Enter the string:"<<endl;
	cin>>s;
	cout<<validPalindrome(s);
	return 0;
}
