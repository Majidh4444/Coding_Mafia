#include<bits/stdc++.h>
using namespace std;


int countCharacters(vector<string>& words, string chars) {
	vector<int> count(26,0);
	int ans = 0;
	for (auto i : chars) count[i - 'a']++;
	for (auto w : words){
	vector<int> temp = count;
	bool flag = true;
	for (auto i : w) {
	  if (temp[i - 'a']-- <= 0) {
	    flag = false;
	    break;
	  }
	}
	if(flag)
	    ans += w.length();
	}
	return ans;
}
 
int main(){
	vector<string> v = {"cat","bt","hat","tree"};
	string s = "atach";
	cout<<countCharacters(v,s);
	return 0;
}
