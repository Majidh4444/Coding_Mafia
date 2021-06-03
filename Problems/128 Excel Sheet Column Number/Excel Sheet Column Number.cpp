#include <iostream>
#include <algorithm>
using namespace std;

int titleToNumber(string columnTitle) {
    long long int N=0;
    long long int a = 1;
    for(int i=columnTitle.size()-1;i>=0;i--){
        N+=((int)(columnTitle[i])-64)*a;
        a*=26;
    }
    return N;
}

int main() {
	string S;
	cout<<"Enter a String:"<<endl;
	cin>>S;
	cout<<titleToNumber(S);
	return 0;
}

