class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int y = m.size(),x = m[0].size();
        for(int i=0;i<y-1;i++){
            if(m[y-1][0] > t){
                for(int j=0;j<x;j++){
                    if(m[i][j] == t) return true;
                }
            }
        }
        for(int i=0;i<x;i++){
            if(m[y-1][i] == t) return true;
        }
        return false;
    }
};
