#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int y, int x) {
	    int max = 0,maxX=-1;
	    for(int i=0;i<y;i++){
	        for(int j=x-1;j>=0;j--){
	            if(arr[i][j] == 0){
	                if(max<(x-j-1)){
	                    max=(x-j-1);
	                    maxX = i;
	                }
	                j=-1;
	            }else if(j==0) return i;
	        }
	    }
	    return maxX;
	}

};

int main(){
    int n, m;
    cin >> n >> m;
    vector< vector<int> > arr(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }
    Solution ob;
    auto ans = ob.rowWithMax1s(arr, n, m);
    cout << ans;
    return 0;
}

//Input:
//4 4
//0 1 1 1 0 0 1 1 1 1 1 1 0 0 0 0
//Output:
//2
