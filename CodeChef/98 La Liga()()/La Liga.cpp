#include <iostream>
#include <map>
using namespace std;

int main() {
	int T,n;
	string S;
	int g;
	cin>>T;
	while(T--){
	    n=4;
	    map<string,int> m;
	    while(n--){
	        cin>>S>>g;
	        m.insert(pair<string,int>{S,g});
	    }
	    //cout<<m["Barcelona"]<<":"<< m["Eibar"]<<":"<<m["Malaga"]<<":"<<m["RealMadrid"]<<endl;
	    if(m["Barcelona"] > m["Eibar"] && m["Malaga"] > m["RealMadrid"]){
	        cout<<"Barcelona"<<endl;
	    }else{
	        cout<<"RealMadrid"<<endl;
	    }
	}
	return 0;
}

