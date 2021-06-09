#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;



int peakIndexInMountainArray(vector<int>& arr) {
    int l = arr.size();
    int low = 0;
    int high = l-1;
    int mid;
    while(low<=high){
        mid = ((high-low)/2)+low;
        if(mid == 0) return 1;
        if(mid == l-1) return l-2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
        else if(arr[mid] < arr[mid+1]) low = mid+1;
        else high = mid-1;
    }
    return mid;
}

int main() {
	vector<int> arr = {3,5,3,2,0};
	cout<<peakIndexInMountainArray(arr);
	return 0;
}
