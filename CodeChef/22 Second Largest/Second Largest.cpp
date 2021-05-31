#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = a+b+c;
        int max = (a>b)?a:b;
        max = (max>c)?max:c;
        int min = (a<b)?a:b;
        min = (min<c)?min:c;
        cout<<(ans-min-max)<<endl;
    }
	return 0;
}

