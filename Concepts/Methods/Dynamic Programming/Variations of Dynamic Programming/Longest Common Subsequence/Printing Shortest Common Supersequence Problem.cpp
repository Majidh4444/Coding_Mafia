#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Top - Bottom Approach
    void scs(int x, int y, string s1, string s2){
        vector<vector<int>> DP(x+1,vector<int>(y+1,0));
        
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0) DP[i][j] = 0;
                else if(s1[i-1] == s2[j-1]) DP[i][j] = 1+DP[i-1][j-1];
                else DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
            }
        }


        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                cout<<DP[i][j]<<" ";
            }
            cout<<endl;
        }


        int i=x,j=y;
        string s = "";
        while(1){
            if(i==0 || j==0) break;
            else if(s1[i-1] == s2[j-1]){
                s=s1[i-1]+s;
                i--;j--;
            }else if(DP[i-1][j] > DP[i][j-1]){
                s = s1[i-1]+s;
                i--;
            }else{
                s = s2[j-1]+s;
                j--;
            }
        }

        while(i>0){
            s = s1[i-1]+s;
            i--;
        }

        while(j>0){
            s = s2[j-1]+s;
            j--;
        }

        cout<<s;
    }
    
};


int main(){
    int x,y;
    cin>>x>>y;
    string s1,s2;
    cin>>s1>>s2;
    Solution ob;
    ob.scs(x, y, s1, s2);
    return 0;
}

// AGGTAB
// GXTXAYB