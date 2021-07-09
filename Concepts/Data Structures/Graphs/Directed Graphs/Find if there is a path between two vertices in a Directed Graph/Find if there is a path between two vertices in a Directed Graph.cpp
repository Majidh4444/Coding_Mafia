#include<bits/stdc++.h>
using namespace std;


class Graph{
	int V;
	list<int> *adj;
	public:
		Graph(int V);//Constructor
		void addEdge(int v, int w);
		int isReachable(int s, int d);
		
};

Graph::Graph(int V){
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

int Graph::isReachable(int s, int d){
	if(s==d) return 1;
	
	vector<int> visited(V,0);
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	
	while(!q.empty()){
		s = q.front();
		q.pop();
		for(auto it = adj[s].begin();it!=adj[s].end();it++){
			if(*it == d) return 1;
			if(visited[*it] == 0){
				visited[*it] = 1;
				q.push(*it);
			}
		}
	}
	return 0;
}


int main(){
	Graph G(4);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(1, 2);
    G.addEdge(2, 0);
    G.addEdge(2, 3);
    G.addEdge(3, 3);
    
    int u=1, v=3;
    if(G.isReachable(u,v)) cout<<"There is a path from "<<u<<" to "<<v<<endl;
    else cout<<"There is no path from "<<u<<" to "<< v<<endl;
    u=3,v=1;
    if(G.isReachable(u,v)) cout<<"There is a path from "<<u<<" to "<<v<<endl;
    else cout<<"There is no path from "<<u<<" to "<< v;
    return 0;
}

//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
//
//Space Compelxity: O(V). 
//There can be atmost V elements in the queue. So the space needed is O(V).
