#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int countSetBits(int n){
        if(n <= 1) return n;
        int x = log2(n);
        return (pow(2,x-1)*x) + (n-pow(2,x)+1) + countSetBits(n-pow(2,x));
    }
};


int main(){
    int n;
    cin>>n; //input n
    Solution ob;
    cout << ob.countSetBits(n);
	return 0;
}