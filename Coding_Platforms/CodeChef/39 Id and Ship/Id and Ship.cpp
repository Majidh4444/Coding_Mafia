#include <iostream>
using namespace std;

int main() {
	int T;
	char S;
	cin>>T;
	while(T--){
	    cin>>S;
	    if(S=='B' || S=='b')cout<<"BattleShip"<<endl;
	    else if(S=='C' || S=='c')cout<<"Cruiser"<<endl;
	    else if(S=='D' || S=='d')cout<<"Destroyer"<<endl;
	    else if(S=='F' || S=='f')cout<<"Frigate"<<endl;
	}
	return 0;
}

