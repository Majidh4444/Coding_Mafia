#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



string defangIPaddr(string address) {
    int i = 0;
    string s = "";
    while(i<address.length()){
        if(address[i] == '.') s = s + "[.]";
        else s = s + address[i];
        i++;
    }
    return s;
}

int main() {
	string address = "255.100.50.0";
	cout<<defangIPaddr(address);
	return 0;
}
