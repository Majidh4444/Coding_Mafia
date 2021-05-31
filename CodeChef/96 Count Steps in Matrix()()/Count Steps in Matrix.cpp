// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
// 	int T,n,temp,ans;
// 	cin>>T;
// 	while(T--){
// 	    cin>>n;
// 	    map<int,int> m1,m2;
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<n;j++){
// 	            cin>>temp;
// 	            m1.insert(pair<int,int>(temp,i));
// 	            m2.insert(pair<int,int>(temp,j));
// 	        }
// 	    }
// 	    ans=0;
// 	    for(int i=1;i<(n*n);i++){
// 	        int d1 = (m1[i]>m1[i+1])?(m1[i]-m1[i+1]):(m1[i+1]-m1[i]);
// 	        int d2 = (m2[i]>m2[i+1])?(m2[i]-m2[i+1]):(m2[i+1]-m2[i]);
// 	        ans=ans+d1+d2;
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }


#include <iostream>
using namespace std;

int main() {
	int T,n,temp,ans;
	cin>>T;
	while(T--){
	    cin>>n;
	    int m1[(n*n)+1]={0};
	    int m2[(n*n)+1]={0};
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>temp;
	            m1[temp] = i;
	            m2[temp] = j;
	        }
	    }
	    ans=0;
	    for(int i=1;i<(n*n);i++){
	        int d1 = (m1[i]>m1[i+1])?(m1[i]-m1[i+1]):(m1[i+1]-m1[i]);
	        int d2 = (m2[i]>m2[i+1])?(m2[i]-m2[i+1]):(m2[i+1]-m2[i]);
	        ans=ans+d1+d2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

