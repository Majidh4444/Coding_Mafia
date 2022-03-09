#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
	void DFS(int v, vector<int> adj[], vector<int>& vec, vector<int>& check){
	    check[v] = 1;
	    vec.push_back(v);
	    for(int i=0;i<adj[v].size();i++){
	        if(check[adj[v][i]] != 1) DFS(adj[v][i],adj,vec,check);
	    }
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<int> vec;
	    vector<int> check(V,0);
	    DFS(0,adj,vec,check);
	    return vec;
	}
};


int main(){
	int V, E;
	cin >> V >> E;
	vector<int> adj[V];
	for(int i = 0; i < E; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
	}
    Solution obj;
    vector<int>ans=obj.dfsOfGraph(V, adj);
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<" ";
    }
	return 0;
}
