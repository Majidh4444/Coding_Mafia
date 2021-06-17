#include<bits/stdc++.h>
using namespace std;


vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> answer(temperatures.size(),0);
    stack<pair<int,int>> s;
    int i = 0;
    while(i<temperatures.size()){
        if(!s.empty() && s.top().second < temperatures[i]){
            answer[s.top().first] = i - s.top().first;
            s.pop();
        }else{
            s.push({i,temperatures[i]});
            i++;
        }
    }
    return answer;
}
 
int main(){
	vector<int> temperatures = {73,74,75,71,69,72,76,73};
	vector<int> v = dailyTemperatures(temperatures);
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	return 0;
}
