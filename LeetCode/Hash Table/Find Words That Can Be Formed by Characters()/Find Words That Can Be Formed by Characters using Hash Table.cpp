#include<bits/stdc++.h>
using namespace std;


int check(string w,unordered_map<char,int> um){
    for(int i=0;i<w.length();i++){
        if(um.find(w[i]) == um.end()) return 0;
        else{
            um[w[i]]--;
            if(um[w[i]] < 0) return 0;
        }
    }
    return w.length();
}



int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        unordered_map<char,int> um;
        for(int i=0;i<chars.length();i++){
            if(um.find(chars[i]) == um.end()) um[chars[i]] = 1;
            else um[chars[i]]++;
        }
        
        for(int i=0;i<words.size();i++){
            ans += check(words[i], um);
        }
        return ans;
}
 
int main(){
	vector<string> v = {"cat","bt","hat","tree"};
	string s = "atach";
	cout<<countCharacters(v,s);
	return 0;
}
