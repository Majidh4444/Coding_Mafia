// sort wrt profit
// declare array for time n
// using for loop
//      check for each job if there is a free space in time array on or before deadline
//      if yes count++ and break
// return count

#include<bits/stdc++.h>
using namespace std; 

struct Job{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};

class Solution {
    public:
    
    static bool com(Job A, Job B){
        return A.profit>B.profit;
    }
    
    vector<int> JobScheduling(Job arr[], int n){
        sort(arr,arr+n,com);
        int jobs = 0;
        int profit = 0;
        vector<int> v(n+1,0);
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead);j>0;j--){
                if(v[j] == 0){
                    profit += arr[i].profit;
                    jobs++;
                    v[j] = 1;
                    break;
                }
            }
        }
        return {jobs, profit};
    } 
};

int main(){
        int n;
        cin >> n;
        Job arr[n];
        
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1];
    
	return 0; 
}