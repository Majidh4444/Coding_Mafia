#include <iostream>
#include <vector>
using namespace std;



void reverseString(vector<char>& s) {
    char c;
    int l =s.size();
    for(int i=0;i<l/2;i++){
        c = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = c; 
    }
}

int main() {
	vector<char> v = {'H','i','l','n','a','h'};
	reverseString(v);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0;
}
