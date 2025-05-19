#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int strStr(string haystack, string needle) {
    if(haystack == needle || needle == "") return 0;
    int i = 0;
    int j = 0;
    while(i<haystack.length()){
        if(haystack[i] == needle[j]){
            j++;
            if(j==needle.length()) return (i-j+1);
            i++;
            continue;
        }else{
            i = i-j;
            j=0;
            i++;
        }
    }
    return -1;
}

int main() {
	cout<<"Enter the String:"<<endl;
	string S,Sf;
	cin>>S;
	cout<<"Enter the String to find:"<<endl;
	cin>>Sf;
	cout<<strStr(S,Sf);
	return 0;
}
