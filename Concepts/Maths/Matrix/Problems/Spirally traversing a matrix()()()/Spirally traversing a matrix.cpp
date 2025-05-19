#include <bits/stdc++.h> 
using namespace std; 

class Solution{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > m, int Y, int X) {
        int x = 0,y = 0;
        vector<int> v;
        while(x<X && y<Y){
            for(int i=x;i<X;i++) v.push_back(m[y][i]);
            y++;
            for(int j=y;j<Y;j++) v.push_back(m[j][X-1]);
            X--;
            if(y<Y){
                for(int i=X-1;i>=x;i--) v.push_back(m[Y-1][i]);
                Y--;
            }
            if(x<X){
                for(int j=Y-1;j>=y;j--) v.push_back(m[j][x]);
                x++;
            }
        }
        return v;
    }
};

int main() {
    int r,c;
    cin>>r>>c;
    vector<vector<int> > matrix(r); 

    for(int i=0; i<r; i++)
    {
        matrix[i].assign(c, 0);
        for( int j=0; j<c; j++)
        {
            cin>>matrix[i][j];
        }
    }

    Solution ob;
    vector<int> result = ob.spirallyTraverse(matrix, r, c);
    for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
    return 0;
}

//Input:
//4 4
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//Output:
//1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
