#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main() {
	int S[100001],n,m,a,f,p;
	vector< pair<int, pair<int, string> > > V;
	string s;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a;
        S[a]=1;
    }
    
    for(int i=1;i<=m;i++){
        cin>>f>>p>>s;
        if(S[f]==1){
            V.push_back(make_pair(0, make_pair((-1)*p,s)));
        }else{
            V.push_back(make_pair(1, make_pair((-1)*p,s)));
        }
    }
    
    sort(V.begin(), V.end());
    for(int i=0;i<V.size();i++) cout<<V[i].second.second<<endl;
        
    return 0;
}

