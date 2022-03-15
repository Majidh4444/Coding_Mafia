// Use recursion
// if node == n return true
// transverse for every color recursively
// before inserting color check if possible using for loop(k!=node && graph[node][k]==1 && color[k]==col)
// if something happens in that recursion stack back track and remove inserted color and try new color 

#include <bits/stdc++.h>
using namespace std;

bool isPossible(bool graph[101][101], vector<int> color, int N, int col, int node){
    for(int k=0;k<N;k++){
        if(k!=node && graph[node][k]==1 && color[k]==col) return false;
    }
    return true;
}


bool solve(bool graph[101][101], int m, int N, vector<int> color, int node){
    if(node==N) return true;
        
    // traverse onto diff color recursively
    for(int i=1;i<=m;i++){  
        if(isPossible(graph,color,N,i,node)){
            color[node]=i;
            if(solve(graph,m,N,color,node+1)) return true;
            color[node]=0;
        }
            
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int N){
    vector<int> color(N,0);
    return solve(graph,m,N,color,0);
}

int main(){
    int n, m, e;
    cin >> n >> m >> e;
    int i;
    bool graph[101][101];
    for (i = 0; i < n; i++) {
        memset(graph[i], 0, sizeof(graph[i]));
    }
    for (i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        graph[a - 1][b - 1] = 1;
        graph[b - 1][a - 1] = 1;
    }
    cout << graphColoring(graph, m, n);
    return 0;
}