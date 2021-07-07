#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
	int checkingForEachNode(int v, vector<int> adj[],int* visited, int* recStack){
	    if(visited[v] == 0){
	        visited[v] = 1;
	        recStack[v] = 1;
	        for(int i=0;i<adj[v].size();i++){
	            if(visited[adj[v][i]] == 0){
	                if(checkingForEachNode(adj[v][i],adj,visited,recStack)) return true;
	            }
	            if(recStack[adj[v][i]] == 1) return true;
	        }
	    }
	    recStack[v] = 0;
	    return 0;
	}
	
	bool isCyclic(int V, vector<int> adj[]) {
	    int visited[V] = {0};
	    int recStack[V] = {0};
	    for(int i=0;i<V;i++){
	        if(checkingForEachNode(i,adj,visited,recStack)) return true;
	    }
	    return false;
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
	cout << obj.isCyclic(V, adj);
    return 0;
}

//Input:
//4 4
//0 1
//1 2
//2 3
//3 3
//OutPut:
//1
