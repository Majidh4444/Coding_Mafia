// #include <iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// #include <vector>
// using namespace std;

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	    vector<int> v;
// 	    for(int i=0;i<10;i++){
// 	        int n;
// 	        cin>>n;
// 	        v.push_back(n);
// 	    }
// 	    int k;
// 	    k = *min_element(v.begin(),v.end());
// 	    auto l = find(v.begin(),v.end(),k);
// 	    int index = distance(v.begin(),l);
// 	    int ans=0;
// 	    if(index==0){
// 	        ans=10;
// 	        while(v[index]--){
// 	            ans*=10;
// 	        }
// 	        cout<<ans<<endl;
// 	        continue;
// 	    }
// 	    while(v[index]>=0){
// 	        ans=ans*10+index;
// 	        v[index]--;
// 	    }
// 	    cout<<ans<<endl;
// 	}
// 	return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
   cin>>t;
   for(int I=1;I<=t;I++)
   {
     int index=0,num=11;
     int candles[11];
     for(int i=0;i<10;i++)
     {
        cin>>candles[i];
        if(candles[i]<num)
         {
             num=candles[i];
             index=i;
         }
     }

     if(index==0)
     {
         for(int i=9;i>0;i--)
         {
             if(num==candles[i])
             {
                 index=i;
             }
         }
         if(index==0)
            cout<<1;
     }
     for(int i=1;i<=num+1;i++)
     {
         cout<<index;
     }
     cout<<"\n";
   }
   return 0;
}
