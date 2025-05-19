// store in vestor as {start, end}
// sort vector wrt end
// use for loop
// meet denotes which meeet is going on
// if(v[i][0] > v[meet][1])
// 		meet = i
//      count++
// return count

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static bool com(const vector<int>& v1, const vector<int>& v2){
        return v1[1]<v2[1];
    }
    
    int maxMeetings(int start[], int end[], int n){
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++) v.push_back({start[i], end[i]});
        
        sort(v.begin(), v.end(),com);

        int count = 1;
        int meet = 0;
        for(int i=1;i<n;i++){
            if(v[i][0] > v[meet][1]){
                count++;
                meet = i;
            }
        }
        return count;
    }
};

int main(){
	int n;
	cin >> n;
	int start[n], end[n];
	for (int i = 0; i < n; i++) cin >> start[i];

	for (int i = 0; i < n; i++) cin >> end[i];

	Solution ob;
	int ans = ob.maxMeetings(start, end, n);
	cout<<ans;
    return 0;
}