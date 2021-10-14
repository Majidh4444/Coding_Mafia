#include<bits/stdc++.h>
using namespace std;

int countRev (string s);

int main(){
    string s;
    cin>>s;
    cout<<countRev (s);
    return 0;
}

int countRev(string s){
    if(s.size()%2 != 0) return -1;

    int open = 0, close = 0;    
    for(int i=0;i<s.size();i++){
        if(s[i] == '{'){
            open++;
        }else{
            if(open>0){
                open--;
            }else{
                open++;
                close++;
            }
        }
    }
    return close+(open/2);
}