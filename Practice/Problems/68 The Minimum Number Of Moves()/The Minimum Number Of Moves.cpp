//x1+x2+x3+x4+......+xn = sum (before incrementing salary)
//n*x = sum+moves(n-1) ->(1) (after increment salary every will have same salary i.e x and for each move sum ncrement by n-1)
//(x-min) = ((sum+moves(n-1))-sum)/(n-1) => (x-min) = moves ->(2)
//solve (1) and (2) for moves we get => moves = sum - (n*min)

#include <iostream>
using namespace std;

int main() {
    int T,n,sum,min;
    cin>>T;
    while(T--){
        sum=0;
        min=10000;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(min>arr[i]){
                min = arr[i];
            }
        }
        cout<<(sum-(n*min))<<endl;
    }
	return 0;
}

