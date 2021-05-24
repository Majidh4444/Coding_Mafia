#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,3,4,6,8,12,16,24,27,34,79,89,99};
    int find = 79;
    int i;
    int l = 13;
    int s = 0;
    int h = l-1;
    while(h>=s){
    	int mid = (s+h)/2;
    	if(arr[mid] == find){
    		i = mid;
    		break;
		}else if(arr[mid] > find){
			h = mid-1;
		}else{
			s = mid+1;
		}
	}
	cout<<i<<endl;
	return 0;
}

