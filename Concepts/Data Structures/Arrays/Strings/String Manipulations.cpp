#include <bits/stdc++.h>
using namespace std;

void Count(){
	string S = "I am Fahadh";
	cout<<"Occurrences of a is "<<count(S.begin(),S.end(),'a')<<" times"<<endl;
}

void subString(){
	string S = "Fahadh Here";
	string sub = S.substr(0,6);//Copy 6 characters of S starting from index 0
	cout<<"Orginal: "<<S<<"/"<<"Copied: "<<sub<<endl;
	sub = S.substr(7);//get sub-string after a index 7
	cout<<"Orginal: "<<S<<"/"<<"Copied: "<<sub<<endl;
}

void Erase(){
	string S = "I am Fahadhhhhhh";
	S.erase(11);//Erases all characters after position ‘pos’ 
	cout<<S<<endl;
	S = "I am Fahdh";
	S.erase();//Erases all characters in String
	cout<<S<<endl;
	S = "I am the Fahadh";
	S.erase(5,4);//Deletes 4 characters from index number 6
	cout<<S<<endl;
	S = "I amt Fahadh";
	S.erase(S.begin()+4);//Erase the single character at iterator position pos
	cout<<S<<endl;
	S = "I am Fahadh";
	S.erase(S.begin(),S.end()-6);//Erase characters from iterator pos. to another iterator pos 
	cout<<S<<endl;
}


int main(){
	cout<<"*********erase function*********"<<endl;
	Erase();
	cout<<"*********substr function*********"<<endl;
	subString();
	cout<<"*********count function*********"<<endl;
	Count();
	return 0;
}

