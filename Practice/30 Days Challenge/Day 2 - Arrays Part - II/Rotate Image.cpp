// 5  1  9  11
// 2  4  8  10
// 13 3  6  7
// 15 14 12 16
// For 90 degrees turn,
// swap columns from both the end it it meets
// 11  9  1  5
// 10  8  4  2
// 7   6  3  13
// 16  12 14 15
// Make transpose of this
// 15  13 2  5
// 14  3  4  1
// 12  6  8  9
// 16  7  10 11

// 180, 270 360 also check in this way

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++){
            int x = 0;
            int y = m-1;
            while(x<y){
                swap(matrix[i][x], matrix[i][y]);
                x++;y--;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m-i;j++){
                    swap(matrix[i][j], matrix[m-j-1][n-i-1]);
            }
        }
        
    }
};