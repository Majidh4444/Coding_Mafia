#include<bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones) {
    unordered_map<char,int> um;
    for(int i=0;i<jewels.length();i++) um[jewels[i]] = 0;
    for(int i=0;i<stones.length();i++){
        if(um.find(stones[i]) != um.end()) um[stones[i]]++;
     }
    int ans = 0;
    for(auto it = um.begin();it!= um.end();it++) ans += it->second;
    return ans;
}
 
int main(){
	string jewels = "aA";
	string stones = "aAAbbbb";
	cout<<numJewelsInStones(jewels,stones);
	return 0;
}
