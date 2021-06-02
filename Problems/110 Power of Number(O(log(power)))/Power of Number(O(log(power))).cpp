#include<iostream>
using namespace std;

long long int powerFunction(int b, int p){
	int ans=1;
	while(p>0){
		if(p%2==1){
			ans=b*ans;
		}
		p=p/2;
		b=b*b;
	}
	cout<<ans;
} 

int main(){
	cout<<"Enter a Base and Power to find it's value in O(log(power)) time complexity:"<<endl;
	long long int base,power;
	cin>>base>>power;
	powerFunction(base,power);
	return 0;
}
