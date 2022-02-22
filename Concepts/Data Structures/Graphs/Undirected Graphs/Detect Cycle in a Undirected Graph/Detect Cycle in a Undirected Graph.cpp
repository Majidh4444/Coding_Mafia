#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool findCycle(int V, vector<int> adj[], vector<int> &rec, vector<int> &visited, int parent){
        if(visited[V] == 0){
            visited[V] = 1;
            rec[V] = 1;
            for(int i=0;i<adj[V].size();i++){
                if(adj[V][i] != parent){
                    if(findCycle(adj[V][i], adj, rec, visited, V)) return true;
                    if(rec[adj[V][i]] == 1) return true;
                }
            }
            rec[V] = 0;
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> visited(V, 0);
        vector<int> rec(V, 0);
        
        for(int i=0; i<V;i++){
            if(findCycle(i, adj, rec, visited, 0)) return true;
        }
        
        return false;
    }
};

int main(){
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    if(ans) cout << "1";
    else cout << "0";
    return 0;
}