#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int number;
        cin>>number;
        int sum = 0;
        while(true){
            sum = sum + number%10;
            number = number/10;
            if(number == 0){
                break;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}

