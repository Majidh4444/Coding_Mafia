#include <iostream>
#include <vector>
using namespace std;



bool isLongPressedName(string name, string typed) {
    int i=0,j=0,ci=0,cj=0;
    while(i<=name.size() && typed[j]!='\0'){
        if(name[i] == typed[j]){
            while(typed[j] == typed[j+1]){
                j++;
                cj++;
            }
            while(name[i] == name[i+1]){
                i++;
                ci++;
            }
            if(cj<ci) return false;
            i++;
            j++;
            ci=0;
            cj=0;
            continue;
        }
        return false;
    }
    if(typed[j]=='\0' && i<name.size()) return false;
    return true;
}

int main() {
	cout<<"Enter Name:"<<endl;
	string S,s;
	cin>>S;
	cout<<"Enter Typed Name:"<<endl;
	cin>>s;
	cout<<isLongPressedName(S,s);
	return 0;
}
