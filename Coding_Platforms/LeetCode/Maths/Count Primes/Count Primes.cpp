#include <iostream>
#include <algorithm>
using namespace std;

int countPrimes(int n) {
    if(n==0||n==1) return 0;
    vector<int> v(n+1,1);
    for(int i=2;i<=sqrt(n);i++){
        if(v[i]==1){
            for(int p=i*i;p<n;p+=i){
                v[p]=0;
            }
        }
    }
    int ans=0;
    for(int i=2;i<n;i++){
        if(v[i]==1) ans++;
    }
    return ans;
}

int main() {
	int N;
	cout<<"Enter a Number:"<<endl;
	cin>>N;
	cout<<countPrimes(N);
	return 0;
}

