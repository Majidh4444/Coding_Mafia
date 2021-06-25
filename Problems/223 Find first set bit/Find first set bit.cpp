#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        unsigned int p = 1;
        while(n){
            if(n&1) return p;
            n>>=1;
            p++;
        }
        return 0;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
