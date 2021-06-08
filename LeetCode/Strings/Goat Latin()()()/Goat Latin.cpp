#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;



bool isVowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

string toGoatLatin(string S) {
    istringstream ss(S);
    string appendStr = "maa";
    string currStr, result;
    while(ss >> currStr) {
        if(isVowel(tolower(currStr[0])))  result += " " + currStr + appendStr;
        else result +=  " " + currStr.substr(1) + currStr[0] + appendStr;
        appendStr.push_back('a');
    }
    return result.substr(1);
    
}

int main() {
	string s;
	cout<<"Enter the string:"<<endl;
	getline (cin, s);
	s = toGoatLatin(s);
	cout<<s;
	return 0;
}
