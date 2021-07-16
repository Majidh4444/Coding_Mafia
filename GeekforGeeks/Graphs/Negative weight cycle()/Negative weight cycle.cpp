#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    int E = edges.size();
	    int dist[n];
	    for(int i=0;i<n;i++) dist[i] = INT_MAX;
	    dist[0] = 0;
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<E;j++){
	            int u = edges[j][0];
	            int v = edges[j][1];
	            int w = edges[j][2];
	            if(dist[u] != INT_MAX && dist[u]+w < dist[v]) dist[v] = dist[u]+w;
	        }
	    }
	    
	    for(int j=0;j<E;j++){
	        int u = edges[j][0];
	       int v = edges[j][1];
	       int w = edges[j][2];
	       if(dist[u] != INT_MAX && dist[u]+w < dist[v]) return 1;
	    }
	    return 0;
	}
};

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>>edges;
	for(int i = 0; i < m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		edges.push_back({x,y,z});
	}
	Solution obj;
	int ans = obj.isNegativeWeightCycle(n, edges);
	cout << ans;
	return 0;
}

//INPUT:
//5 8
//0 1 -1
//0 2 4
//1 2 3
//1 3 2
//1 4 2
//3 2 5
//3 1 1
//4 3 -3
//Output:
//Vertex   Distance from Source
//0                0
//1                -1
//2                2
//3                -2
//4                1

//time complexity of Bellman-Ford is O(VE)
