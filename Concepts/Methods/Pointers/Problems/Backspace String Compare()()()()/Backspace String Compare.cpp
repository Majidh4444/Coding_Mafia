#include <iostream>
#include <vector>
using namespace std;



void erase(short& p, const string& x){
    short bs=0;
    while(p>=0 && x[p]=='#'){
        while(p>=0 && x[p]=='#'){
            bs++;
            p--;
        }
        while(p>=0 && bs){
            if(x[p]=='#') break;
			bs--;
            p--;
        }
    }
}

bool backspaceCompare(string s, string t) {
    short i=s.length()-1, j=t.length()-1;
    while(i>=0 || j>=0){
        erase(i,s);
        erase(j,t);
        if(i<0 && j<0) return true;
        if(i<0 || j<0 || s[i]!=t[j]) return false;
        i--; j--;
    }
    return true;
}

int main() {
	cout<<"String One:"<<endl;
	string S,s;
	cin>>S;
	cout<<"String Two:"<<endl;
	cin>>s;
	cout<<backspaceCompare(S,s);
	return 0;
}
