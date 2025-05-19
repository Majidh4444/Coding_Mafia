#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;


string reverseWords(string& s) {
    int i = 0;
    for (int j = 0; j < s.size(); ++j) {
        if (s[j] == ' ') {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
    reverse(s.begin() + i, s.end());
    return s;
}

int main() {
	string s;
	cout<<"Enter the string:"<<endl;
	getline(cin,s);
	s = reverseWords(s);
	cout<<s;
	return 0;
}
