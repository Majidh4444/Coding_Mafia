#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



// int maxNumberOfBalloons(string text) {
//     map<char, int> m;
//     for (char i : text) m[i] += 1;
//     return min ( { m['b'] , m['a'] , m['l']/2 , m['o']/2 , m['n'] } ) ;
// }



///Best Solution
int maxNumberOfBalloons(string text) {
    int c[] = {0, 0, 0, 0, 0};
    for (char i : text) {
        switch (i) {
            case 'b':
                c[0] += 1;
                break;
            case 'a':
                c[1] += 1;
                break;
            case 'l':
                c[2] += 1;
                break;
            case 'o':
                c[3] += 1;
                break;
            case 'n':
                c[4] += 1;
                break;
        }
    }
    return min({c[0], c[1], c[2]/2, c[3]/2, c[4]});
}


int main() {
	string s;
	cout<<"Enter the string:"<<endl;
	cin>>s;
	cout<<maxNumberOfBalloons(s);
	return 0;
}
