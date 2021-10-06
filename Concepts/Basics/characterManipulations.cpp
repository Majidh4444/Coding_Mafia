#include<bits/stdc++.h>
using namespace std;

void toCheckAlpha(char ch){
    //*******************************************************************************************************************//
    if(isalpha(ch)) cout<<"YES => isalpha()"<<endl;
}

void toCheckDigit(char ch){
    //*******************************************************************************************************************//
    if(isdigit(ch)) cout<<"YES => isdigit()"<<endl;
}

void toCheckAlphaNumerical(char ch){
    //*******************************************************************************************************************//
    if(isalnum(ch)) cout<<"YES => isalnum()"<<endl;
}

void changeToLower(char ch){
    //*******************************************************************************************************************//
    cout<<char(tolower(ch))<<" => tolower() which return ASCII value"<<endl;
}

void changeToUpper(char ch){
    //*******************************************************************************************************************//
    cout<<char(toupper(ch))<<" => toupper() which return ASCII value we have to change it."<<endl;
}


int main(){
	char ch = 'A';

    toCheckAlphaNumerical(ch);
    toCheckAlpha(ch);
    toCheckDigit(ch);
    changeToLower(ch);

	return 0;
}