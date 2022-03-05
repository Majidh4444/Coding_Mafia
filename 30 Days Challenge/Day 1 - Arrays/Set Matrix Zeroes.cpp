class Solution {
public:
    
    void rsetZeroes(int r, vector<vector<int>>& v){
        for(int i=0;i<v[0].size();i++) v[r][i] = 0;
    }
    
    void csetZeroes(int c, vector<vector<int>>& v){
        for(int i=0;i<v.size();i++) v[i][c] = 0;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();        
        vector<int> r;
        vector<int> c;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        
        for(int i=0;i<r.size();i++) rsetZeroes(r[i], matrix);
        for(int i=0;i<c.size();i++) csetZeroes(c[i], matrix);
    }
};