// Use recursion in evry possible way to get complete way

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void paths(vector<vector<int>> m, int i, int j, int N, vector<string> &s, string str){
        if(i == N-1 &&j == N-1){
            s.push_back(str);
            return;
        }
        
        m[i][j] = 0;
        if(i-1 >= 0 && i-1 < N && m[i-1][j] == 1) paths(m, i-1, j, N, s, str+'U');
        if(i+1 >= 0 && i+1 < N && m[i+1][j] == 1) paths(m, i+1, j, N, s, str+'D');
        if(j+1 >= 0 && j+1 < N && m[i][j+1] == 1) paths(m, i, j+1, N, s, str+'R');
        if(j-1 >= 0 && j-1 < N && m[i][j-1] == 1) paths(m, i, j-1, N, s, str+'L');
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n){
        vector<string> s;
        if(m[0][0] == 0 || m[n-1][n-1] == 0) return s;
        
        string str = "";
        paths(m, 0, 0, n, s, str);
        return s;
    }
};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int> (n,0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }
    Solution obj;
    vector<string> result = obj.findPath(m, n);
    sort(result.begin(), result.end());
    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
    
    return 0;
}