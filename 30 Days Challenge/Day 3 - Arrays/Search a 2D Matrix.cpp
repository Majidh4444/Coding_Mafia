// Find out which row by checking both ends
// then use binnary search to find exact position in row

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i;
        for(i=0;i<n;i++){
            if(matrix[i][0] == t || matrix[i][m-1] == t) return true;
            else if(t>matrix[i][0] && t<matrix[i][m-1]) break;
        }
        
        if(i == n) return false;
        
        if(binary_search(matrix[i].begin(), matrix[i].end(), t)) return true;
        else return false;
    }
};