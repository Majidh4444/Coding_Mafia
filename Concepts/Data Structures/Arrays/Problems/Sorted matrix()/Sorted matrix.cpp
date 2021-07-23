#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> M) {
        vector<int> v(N,0);
        vector<vector<int>> V(N,v);
        priority_queue<int, vector<int>, greater<int>> p;
        int x;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) p.push(M[i][j]);
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                V[i][j] = p.top();
                p.pop();
            }
        }
        return V;
    }
};

int main() {
    int N;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> v[i][j];
    Solution ob;
    v = ob.sortedMatrix(N, v);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) cout << v[i][j] << " ";
        cout << "\n";
    }
}

//Input:
//4
//10 20 30 40
//15 25 35 45 
//27 29 37 48 
//32 33 39 50
//Output:
//10 15 20 25
//27 29 30 32
//33 35 37 39
//40 45 48 50
