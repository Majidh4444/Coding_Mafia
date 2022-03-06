// Three Cases
// One:
// ---------
//   ----------
// Two
// ---------
//   ---
// Three
// ---------
//           ---------

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
        int n = in.size();
        vector<vector<int>> v;
        int start = in[0][0];
        int end = in[0][1];
        for(int i=1;i<n;i++){
            if(end >= in[i][0]){
                if(in[i][1] > end){
                    end = in[i][1];
                }
            }else{
                v.push_back({start, end});
                start = in[i][0];
                end = in[i][1];
            }
        }
        v.push_back({start, end});
        return v;
    }
};