// USe Dynamic Programming

class Solution {
public:
//     void rec(vector<vector<int>> v, int i, int j, int* count, int m ,int n){
//         if(i == m-1 && j == n-1){
//             *count = (*count) + 1;
//             return;
//         }
//         v[i][j] = 1;
//         if(i+1 < m) rec(v, i+1, j, count, m, n);
//         if(j+1 < n)rec(v, i, j+1, count, m, n);
//     }
    
//     int uniquePaths(int m, int n) {
//         int count = 0;
//         vector<vector<int>> v(m, vector<int>(n, 0));
//         rec(v, 0, 0, &count, m, n);
//         return count;
//     }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m, vector<int>(n, 1));
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                v[i][j] = v[i-1][j] + v[i][j-1];
            }
        }
        return v[m-1][n-1];
    }
};