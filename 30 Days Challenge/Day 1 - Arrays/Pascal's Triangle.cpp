class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        int i=0;
        while(i<n){
            vector<int> t(i+1, 1);
            for(int j=0;j<i-1;j++){
                t[j+1] = v[i-1][j]+v[i-1][j+1];
            }
            v.push_back(t);
            i++;
        }
        return v;
    }
};