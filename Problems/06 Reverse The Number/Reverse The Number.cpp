#include <iostream>
using namespace std;

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	    int n;
// 	    cin>>n;
// 	    int num = n;
// 	    int c = 1;
// 	    int ten = 1;
// 	    while(n>9){
// 	        c = c + 1;
// 	        ten = ten * 10;
// 	        n = n/10;
// 	    }
// 	    int ans=0;
// 	    for(int i=0;i<c;i++){
// 	        ans = ans + ten*(num%10);
// 	        num=num/10;
// 	        ten=ten/10;
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    while(n>9){
	        ans = ans*10 + (n%10);
	        n = n/10;
	    }
	    ans = ans*10 + n;
	    cout<<ans<<endl;
	}
	return 0;
}
