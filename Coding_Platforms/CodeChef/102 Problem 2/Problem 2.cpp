#include <iostream>
using namespace std;

int ispalindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){    
        rev=rev*10 + n%10;
        n = n/10;
    }
    if(rev==temp) return 1;
    else return 0;
}

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    for(int i=n+1;i<100000;i++){    
	        if(ispalindrome(i)){
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}

