#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N,x1,y1,x2,y2,x3,y3;
	int ans=0;
	cin>>N;
	while(N--){
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    int arr[3];
	    arr[0] = (pow(x1-x2,2)+pow(y1-y2,2));
	    arr[1] = (pow(x2-x3,2)+pow(y2-y3,2));
	    arr[2] = (pow(x1-x3,2)+pow(y1-y3,2));
	    sort(arr,arr+3);
	    if(arr[2] == arr[0]+arr[1]) ans++;
	}
	cout<<ans;
	return 0;
}

