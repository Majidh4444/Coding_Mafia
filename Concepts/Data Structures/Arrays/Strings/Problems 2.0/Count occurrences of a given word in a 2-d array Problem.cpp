#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(vector<vector<char>>&mat,int i,int j, int ind,int R, int C, string S){
        int count = 0;
        if(i>=0 && j>=0 && i<R && j<C && S[ind] == mat[i][j]){
            char temp = mat[i][j];
            mat[i][j] = '0';
            if(ind+1 == S.size()) count = 1;
            else{
                count += solve(mat,i-1,j,ind+1,R,C,S);
                count += solve(mat,i,j-1,ind+1,R,C,S);
                count += solve(mat,i+1,j,ind+1,R,C,S);
                count += solve(mat,i,j+1,ind+1,R,C,S);
            }
            mat[i][j] = temp;
        }
        return count;
    }
    
    int findOccurrence(vector<vector<char>>&mat, string target){
        int R = mat.size();
        int C = mat[0].size();
        
        int count = 0;
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                count += solve(mat,i,j,0,R,C,target);
            }
        }
        return count;
    }
};

int main() {
    int R, C;
    cin >> R >> C;
    vector<vector<char> > mat(R);
    for (int i = 0; i < R; i++) {
        mat[i].resize(C);
        for (int j = 0; j < C; j++) cin >> mat[i][j];
    }
    string target;
    cin >> target;
    Solution obj;
    cout<<obj.findOccurrence(mat,target);
}