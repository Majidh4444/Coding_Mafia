#include<bits/stdc++.h>
using namespace std;

typedef struct Edge{
	int src, dest, weight;
}Edge;

typedef struct Graph{
	int V,E;
	Edge* edge;
}Graph;

Graph* createGraph(int V, int E){
	Graph* G = new Graph;
	G->V = V;
	G->E = E;
	G->edge = new Edge[E];
	return G;
}

void addEdges(int e, int s, int d, int w, Graph* G){
	G->edge[e].src = s;
	G->edge[e].dest = d;
	G->edge[e].weight = w;
}

void printArr(int dist[], int V){
    printf("\nVertex   Distance from Source");
    for (int i=0;i<V;i++) printf("\n%d \t\t %d", i, dist[i]);
}

void BellamFord(Graph* G, int s){
	int V = G->V;
	int E = G->E;
	int dist[V];
	for(int i=0;i<V;i++) dist[i] = INT_MAX;
	dist[s] = 0;
	
	for(int i=0;i<V-1;i++){
		for(int j=0;j<E;j++){
			int u = G->edge[j].src;
			int v = G->edge[j].dest;
			int w = G->edge[j].weight;
			if(dist[u] != INT_MAX && dist[u]+w < dist[v]){
				dist[v] = dist[u]+w;
			}
		}
	}
	
    for (int i = 0; i < E; i++) {
        int u = G->edge[i].src;
        int v = G->edge[i].dest;
        int w = G->edge[i].weight;
        if (dist[u] != INT_MAX && dist[u]+w < dist[v]) {
            printf("Graph contains negative weight cycle");
            return;
        }
    }
    
    printArr(dist,V);
}

int main(){
	int V,E,s,d,w;
	cout<<"Enter V and E: ";
	cin>>V>>E;
	Graph* G = createGraph(V,E);
	cout<<"Enter edge's src, dest, weight"<<endl;
	for(int i=0;i<E;i++){
		cin>>s>>d>>w;
		addEdges(i,s,d,w,G);
	}
	BellamFord(G,0);
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
