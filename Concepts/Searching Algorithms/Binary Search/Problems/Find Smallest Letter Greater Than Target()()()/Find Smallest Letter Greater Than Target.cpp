#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



char nextGreatestLetter(vector<char>& letters, char target) {
    int n = letters.size();
    if(target >= letters[n - 1])
        return letters[0];
    int s = 0;
    int e = n - 1;

    while(s < e){
        int mid = s + (e - s) / 2;
        if(letters[mid] > target)
            e = mid;
        else
            s = mid + 1;
    }
    return letters[s];
 }

int main() {
	vector<char> letters = {'c','f','j'};
	int target = 'a';
	cout<<nextGreatestLetter(letters,target);
	return 0;
}
