#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



bool judgeCircle(string moves) {
    vector<int> v = {0,0};
    int i=0;
    while(i<moves.length()){
        if(moves[i] == 'U') v[1]++;
        else if(moves[i] == 'D') v[1]--;
        else if(moves[i] == 'R') v[0]++;
        else v[0]--;
        i++;
    }
    if(v[0] == 0 && v[1] == 0) return true;
    return false;
}

int main() {
	string directions;
	cout<<"Enter the directions string to check:"<<endl;
	cin>>directions;
	cout<<judgeCircle(directions);
	return 0;
}
