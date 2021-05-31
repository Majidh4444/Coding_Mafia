#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int isprime(int n){
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(i!=n && (n%i==0)){
            return 0;
        }
    }
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=n; i<=m; i++)
        {
            if(isprime(i))
                cout<<i<<endl;
        }
        cout<<endl;
    }
	return 0;
}
