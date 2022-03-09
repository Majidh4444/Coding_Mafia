#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
	vector<int> bfsOfGraph(int V, vector<int> adj[]){
	    vector<int> vec;
	    vector<int> check(V,0);
	    queue<int> q;
	    int a;
	    q.push(0);
	    check[0] = 1;
	    while(!q.empty()){
	        a = q.front();
	        q.pop();
	        vec.push_back(a);
	        for(int i=0;i<adj[a].size();i++){
	            if(check[adj[a][i]] == 0){
	                q.push(adj[a][i]);
	                check[adj[a][i]] = 1;
	            }
	        }
	    }
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
    vector<int>ans=obj.bfsOfGraph(V, adj);
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<" ";
    }
	return 0;
}