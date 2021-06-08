#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



string toLowerCase(string s) {
    int i=0;
    while(i<s.length()){
        s[i] = tolower(s[i]);
        i++;
    }
    return s;
}

int main() {
	string s;
	cout<<"Enter the string to change all uppercase to lowercase:"<<endl;
	cin>>s;
	cout<<toLowerCase(s);
	return 0;
}
