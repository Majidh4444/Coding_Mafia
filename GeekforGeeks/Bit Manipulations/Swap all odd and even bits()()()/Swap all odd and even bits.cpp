#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    unsigned int swapBits(unsigned int n)
    {
    	// Get all even bits of x
        unsigned int even_bits = n & 0xAAAAAAAA;
     
        // Get all odd bits of x
        unsigned int odd_bits = n & 0x55555555;
     
        even_bits >>= 1; // Right shift even bits
        odd_bits <<= 1; // Left shift odd bits
     
        return (even_bits | odd_bits); // Combine even and odd bits
    }
};

int main()
{
	int t;
	cin>>t;//testcases
	while(t--)
	{
		unsigned int n;
		cin>>n;//input n
		
		Solution ob;
		//calling swapBits() method
		cout << ob.swapBits(n) << endl;
	}
	return 0;
}
