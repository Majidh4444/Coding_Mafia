class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int n = in.size();
        vector<vector<int>> v;
        vector<int> t = {0,0};
        int f=in[0][0],s=in[0][1];
        for(int i=0;i<n-1;i++){
            if(s>=in[i+1][0]){
                s = max(s,in[i+1][1]);
                continue;
            }else{
                t[0]=f,t[1]=s;
                v.push_back(t);
                f=in[i+1][0];
                s=in[i+1][1];
            }
        }
        if(f==in[n-1][0]) v.push_back(in[n-1]);
        else{
            t[0]=f,t[1]=max(s,in[n-1][1]);
            v.push_back(t);
        }
        return v;
    }
};
