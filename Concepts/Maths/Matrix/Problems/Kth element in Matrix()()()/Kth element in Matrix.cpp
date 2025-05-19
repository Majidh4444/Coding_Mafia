#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    int r;
    cin>>r;
    cout<<kthSmallest(mat,n,r);
  	return 0;
}

int kthSmallest(int m[MAX][MAX], int n, int k){
    priority_queue<int> p;
    for(int y=0;y<n;y++){
        for(int x=0;x<n;x++){
            if(p.size()<k) p.push(m[y][x]);
            else{
                if(p.top()>m[y][x]){
                    p.pop();
                    p.push(m[y][x]);
                }
            }
        }
    }
    return p.top();
}

//Input:
//4
//16 28 60 64 22 41 63 91 27 50 87 93 36 78 87 94
//3
//Output:
//27
