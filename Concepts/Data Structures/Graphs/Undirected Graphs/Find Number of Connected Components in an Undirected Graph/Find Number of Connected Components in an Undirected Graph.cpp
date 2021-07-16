// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int isSafe(vector<vector<char>>& m, vector<vector<int>>& v, int r, int c){
        return (r>=0) && (r<v.size()) && (c>=0) && (c<v[0].size()) && (m[r][c] == '1' && !v[r][c]);
    }
    
    void DFS(vector<vector<char>>& m, vector<vector<int>>& v,int r, int c){
        int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
        int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
        v[r][c] = 1;
        for(int i=0;i<8;i++){
            if(isSafe(m,v,r+rowNbr[i],c+colNbr[i])){
				DFS(m,v,r+rowNbr[i],c+colNbr[i]);
			}
        }
    }
    
    int countIslands(vector<vector<char>>& m,vector<vector<int>>& v, int R, int C){
        int count = 0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(m[i][j] == '1' && !v[i][j]){
                    DFS(m,v,i,j);
                    count++;
                }
            }
        }
        return count;
    }
    
    int numIslands(vector<vector<char>>& grid){
        int R = grid.size();
        int C = grid[0].size();
        vector<int> vec(C,0);
        vector<vector<int>> v(R,vec);
        return countIslands(grid,v,R,C);
    }
};


// { Driver Code Starts.
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<char>>grid(n, vector<char>(m, '#'));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> grid[i][j];
		}
	}
	Solution obj;
	int ans = obj.numIslands(grid);
	cout << ans;
	return 0;
}

//Input:
//5 5
//1 1 0 0 0
//0 1 0 0 1
//1 0 0 1 1
//0 0 0 0 0
//1 0 1 0 1
//Output:
//5
