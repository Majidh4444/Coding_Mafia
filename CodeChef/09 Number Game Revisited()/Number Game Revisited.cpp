#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if((n-1)%4 ==0){
            cout<<"ALICE\n";
        }
        else
            cout<<"BOB\n";
    }
	return 0;
}

