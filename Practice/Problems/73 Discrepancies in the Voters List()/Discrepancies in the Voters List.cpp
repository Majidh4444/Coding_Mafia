#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int N1,N2,N3;
	cin>>N1>>N2>>N3;
	int S = N1+N2+N3;
	int arr[S];
	for(int i=0;i<S;i++) cin>>arr[i];
	sort(arr,arr+S);
	vector<int> ans;
	ans.push_back(0);
	int c=0;
	for(int i=0;i<S;i++){
	    if(arr[i]==arr[i+1]){
	        c++;
	    }else{
	        if(c>=1){
	            ans[0]++;
	            ans.push_back(arr[i]);
	        }
	        c=0;
	    }
	}
	for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<endl;
	}
	return 0;
}

