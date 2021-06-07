#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int romanToInt(string s) {
    int sum = 0;
    int i = 0;
    while(i<s.length()){
        if(s[i] == 'M') sum+=1000;
        else if(s[i] == 'D') sum+=500;
        else if(s[i] == 'C'){
            if(s[i+1] == 'D' || s[i+1] == 'M') sum-=100;
            else sum+=100;
        }
        else if(s[i] == 'L') sum+=50;
        else if(s[i] == 'X'){
            if(s[i+1] == 'L' || s[i+1] == 'C') sum-=10;
            else sum+=10;
        }
        else if(s[i] == 'V') sum+=5;
        else if(s[i] == 'I'){
            if(s[i+1] == 'V' || s[i+1]=='X') sum-=1;
            else sum+=1;
        }
        i++;
    }
    return sum;
}

int main() {
	cout<<"Enter the Roman String to convert to Integer:"<<endl;
	string S;
	cin>>S;
	cout<<romanToInt(S);
	return 0;
}
