#include <bits/stdc++.h> 
using namespace std; 

class Solution{   
    public:
    void rotateby90(vector<vector<int> >& m, int n){
        int t;
        for(int y=0;y<n;y++){
            for(int x=0;x<(n/2);x++){
                t = m[y][x];
                m[y][x] = m[y][n-1-x];
                m[y][n-1-x] = t;
            }
        }
        for(int y=0;y<n;y++){
            for(int x=y;x<n;x++){
                if(x!=y){
                    t = m[y][x];
                    m[y][x] = m[x][y];
                    m[x][y] = t;
                }
            }
        }
    } 
};

int main() {
    int n;
    cin>>n;
    vector<vector<int> > matrix(n); 

    for(int i=0; i<n; i++)
    {
        matrix[i].assign(n, 0);
        for( int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    Solution ob;
    ob.rotateby90(matrix, n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cout<<matrix[i][j]<<" ";
    return 0;
}

//Input:
//3
//1 2 3 4 5 6 7 8 9
//Output:
//3 6 9 2 5 8 1 4 7
