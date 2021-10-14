#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);

int main(){
    string s;
    getline(cin,s);
    cout<<printSequence(s);
	return 0;
}

string printSequence(string S){
    string str = "";
    string arr[] = {"2", "22", "222",
                    "3", "33", "333",
                    "4", "44", "444",
                    "5", "55", "555",
                    "6", "66", "666",
                    "7", "77", "777", "7777",
                    "8", "88", "888",
                    "9", "99", "999", "9999"
                    };
    int index;
    for(int i=0;i<S.size();i++){
        if(S[i] == ' '){
            str += "0";
        }else{
            index = S[i] - 'A';
            str += arr[index];
        }
    }
    
    return str;
}