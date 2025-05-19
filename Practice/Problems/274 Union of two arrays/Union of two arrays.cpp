#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        set<int> s(a,a+n);
        for(int i=0;i<m;i++) s.insert(b[i]);
        return s.size();
    }
    //2
};
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
   
    for(int i = 0;i<n;i++)
       cin >> a[i];
       
    for(int i = 0;i<m;i++)
       cin >> b[i];
    Solution ob;
    cout << ob.doUnion(a, n, b, m);
	
	return 0;
}

//Input:
//5 3
//1 2 3 4 5
//1 2 3
//Output:
//5
	
