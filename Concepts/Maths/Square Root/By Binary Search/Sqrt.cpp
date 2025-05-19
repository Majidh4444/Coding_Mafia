#include <iostream>
using namespace std;

int sqrt(int n){
    if(n==0 || n==1){
        return n;
    }
    int f=1;
    int l=n;
    int mid,ans;
    while(l>=f){
        mid=(f+l)/2;
        if(mid*mid==n){
            return mid;
        }else if(mid*mid<n){
            f=mid+1;
            ans=mid;
        }else{
            l=mid-1;
        }
    } 
    return ans;
}

int main() {
	int n;
    cin>>n;
    int ans = sqrt(n);
    cout<<ans<<endl;
	return 0;
}

