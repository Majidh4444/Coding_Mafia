#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int n, p;
        cin>>n>>p;
        int ans = 0;
        while(n--){
            int temp;
            cin>>temp;
            if(temp>= p)
            ans++;
        }
        cout<<ans<<endl;
    }
    	return 0;
}

