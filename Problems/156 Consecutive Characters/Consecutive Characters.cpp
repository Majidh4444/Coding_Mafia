#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int maxPower(string s) {
    int i = 0;
    int ans = 0,c=1;
    while(i<s.length()){
        if(s[i]==s[i+1]) c++;
        else{
            ans = max(ans,c);
            c=1;
        }
        i++;
    }
    return ans;
}

int main() {
	string address;
	cout<<"Enter the string to check:"<<endl;
	cin>>address;
	cout<<maxPower(address);
	return 0;
}
