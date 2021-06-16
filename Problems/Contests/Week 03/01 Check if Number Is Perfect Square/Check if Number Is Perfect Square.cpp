#include<bits/stdc++.h>
using namespace std;

bool solve(int n) {
    int l = 0;
    int h = n;
    long long  mid;
    while(l<=h){
        long long sqt;
        mid = ((h-l)/2)+l;
        sqt = mid*mid;
        if(sqt == n) return true;
        else if((sqt) > n) h = mid-1;
        else l = mid+1;
    }
    return false;
}
 
int main(){
	cout<<"Enter The Number:"<<endl;
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}
