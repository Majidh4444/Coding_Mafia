class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> v;
        //* Sorting vector
        sort(in.begin(),in.end());
        int n = in.size();
        //* Pushing first element into vector
        v.push_back(in[0]);
        for(int i=1;i<n;i++){
            //* Fining size to get last element
            int l = v.size()-1;
            //* if next interval is in between this ([1,5], [2,3])
            if(in[i][1] <= v[l][1]) continue;
            else{
                //* If only smallest element in interval is in between ([1,5] <=> [3,10])
                if(in[i][0] <= v[l][1]){
                    v[l][1] = in[i][1];
                }else{
                    //* If both are not in between ([1,5] <=> [6,10])
                    v.push_back(in[i]);
                }
            }
        }
        return v;
    }
};