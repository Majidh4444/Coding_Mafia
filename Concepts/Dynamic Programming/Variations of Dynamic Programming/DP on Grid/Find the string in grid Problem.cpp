#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<vector<char>> grid, int i, int j, int ind, int R, int C, string S, int d){
        int found = 0;
        if(i>=0 && j>=0 && i<R && j<C && S[ind] == grid[i][j]){
            if(ind+1 == S.size()) return 1;
            char temp = grid[i][j];
            grid[i][j] = '0';
            
            if(d == 0) found = solve(grid,i-1,j-1,ind+1,R,C,S,0);
            if(d == 1) found = solve(grid,i-1,j,ind+1,R,C,S,1);
            if(d == 2) found = solve(grid,i-1,j+1,ind+1,R,C,S,2);
            if(d == 3) found = solve(grid,i,j+1,ind+1,R,C,S,3);
            if(d == 4) found = solve(grid,i+1,j+1,ind+1,R,C,S,4);
            if(d == 5) found = solve(grid,i+1,j,ind+1,R,C,S,5);
            if(d == 6) found = solve(grid,i+1,j-1,ind+1,R,C,S,6);
            if(d == 7) found = solve(grid,i,j-1,ind+1,R,C,S,7);
            
            grid[i][j] = temp;
        }
        return found;
    }
    
	vector<vector<int>>searchWord(vector<vector<char>>grid, string S){
	    vector<vector<int>> V;
	    int R = grid.size();
	    int C = grid[0].size();
	    int ind = 0;
	    for(int i=0;i<R;i++){
	       for(int j=0;j<C;j++){
	           int found = 0;
	           if(S[0] == grid[i][j]){
	                char temp = grid[i][j];
	                found += solve(grid,i-1,j-1,ind+1,R,C,S,0);
                    found += solve(grid,i-1,j,ind+1,R,C,S,1);
                    found += solve(grid,i-1,j+1,ind+1,R,C,S,2);
                    found += solve(grid,i,j+1,ind+1,R,C,S,3);
                    found += solve(grid,i+1,j+1,ind+1,R,C,S,4);
                    found += solve(grid,i+1,j,ind+1,R,C,S,5);
                    found += solve(grid,i+1,j-1,ind+1,R,C,S,6);
                    found += solve(grid,i,j-1,ind+1,R,C,S,7);
	                grid[i][j] = temp;
	                
	                if(found>0 || S.size() == 1) V.push_back({i,j});
	           }
	       }
	    }
	    sort(V.begin(),V.end());
	    return V;
	}
};

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>>grid(n, vector<char>(m,'x'));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    string word;
    cin >> word;
    Solution obj;
    vector<vector<int>>ans = obj.searchWord(grid, word);
    for(auto i: ans){
        for(auto j: i)
            cout << j << " ";
        cout<<endl;
    }
    if(ans.size() == 0) cout<<"-1";
	return 0;
}