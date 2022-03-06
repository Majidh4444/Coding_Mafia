// class Solution {
// public:
    
//     void rsetZeroes(int r, vector<vector<int>>& v){
//         for(int i=0;i<v[0].size();i++) v[r][i] = 0;
//     }
    
//     void csetZeroes(int c, vector<vector<int>>& v){
//         for(int i=0;i<v.size();i++) v[i][c] = 0;
//     }
    
//     void setZeroes(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();        
//         vector<int> r;
//         vector<int> c;
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j] == 0){
//                     r.push_back(i);
//                     c.push_back(j);
//                 }
//             }
//         }
        
//         for(int i=0;i<r.size();i++) rsetZeroes(r[i], matrix);
//         for(int i=0;i<c.size();i++) csetZeroes(c[i], matrix);
//     }
// };


//Best Solution
// 4*8
// * * * * 0 * * *
// * * * * * * * *
// 0 * * * 0 * * *
// 0 * * * * * * *
// If v[2][4] = 0 then make v[2][0] = 0 and v[0][2] = 0
// But if v[2][0] = 0 dont change any thing use flag variable to indicate that colunm 0 = 0

// Using Above data interate array without first colunm and check v[i][0] = 0 || v[0][j] = 0 to make v[i][j] = 0
// For first column use flag variable to change to zero


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();        
        
        int col0 = 1;        
        
        for(int i=0;i<n;i++){
            if(matrix[i][0] == 0) col0 = 0;
            for(int j=1;j<m;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 0) matrix[i][0] = 0;
        }
        
        
    }
};