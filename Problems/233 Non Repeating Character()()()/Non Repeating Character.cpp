#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S){
   map<char,int> m;
   for(int i=0;i<S.size();i++){
       if(m.find(S[i]) == m.end()) m[S[i]] = 1;
       else m[S[i]]++;
       //cout<<S[i]<<":"<<m[S[i]]<<endl;
   }
   for(int i=0;i<S.size();i++){
       if(m[S[i]] == 1) return S[i];
   }
   return '$';
}

int main(){
	string S;
	cout<<"Enter the string to find first non-repeating character: ";
	cin>>S;
	cout<<nonrepeatingCharacter(S);
	return 0;
}

