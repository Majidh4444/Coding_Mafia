#include <bits/stdc++.h>
using namespace std;

void backTracking(string S, string A){
    if(S == ""){
    	cout<<A<<" ";
    	return;
	}
    for(int i=0;i<S.size();i++){
        string sub = S;
        backTracking(sub.erase(i,1),A+S[i]);
    }
}

vector<string>find_permutation(string S){
    string A = "";
    backTracking(S,A);
}

int main(){
	string S;
	cout<<"Enter the string: ";
	cin>>S;
	sort(S.begin(),S.end());
	find_permutation(S);
	return 0;
}

