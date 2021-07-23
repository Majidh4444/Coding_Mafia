#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> g;

    void insert(int n){
        int t=n;
        if(s.size()>g.size()){
            if(s.top()>n){
                t = s.top();
                s.pop();
                s.push(n);
            }
            g.push(t);
        }else{
            if(!g.empty() && g.top()<n){
                t = g.top();
                g.pop();
                g.push(n);
            }
            s.push(t);
        }
    }

    int median(vector<vector<int>> &m, int r, int c){
        for(int y=0;y<r;y++){
            for(int x=0;x<c;x++){
                insert(m[y][x]);
            }
        }
        if(s.size()>g.size()) return s.top();
        else return((s.top()+g.top())/2);
    }
};


int main(){
    int r, c;
    cin>>r>>c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i < r; ++i)
        for(int j = 0;j < c; ++j)
            cin>>matrix[i][j];
    Solution obj;
    cout<<obj.median(matrix, r, c);
    return 0;
}

//Input
//3 3
//1 3 5 2 6 9 3 6 9
//Output:
//5
