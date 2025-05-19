// sort with respect to value/weight
// while(W && i<n)
//      if W>=arr[i].weight
//          add arr[i].value to total
//          remove arr[i].weight from W and i++
//      else
//           add W*value of each weight
//           return total

#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution{
    public:

    static bool com(Item A, Item B){
        return (double)A.value/(double)A.weight>(double)B.value/(double)B.weight;
    }
    
    double fractionalKnapsack(int wt, Item arr[], int n){
        sort(arr,arr+n,com);
        double total = 0;
        int i=0;
        double W = wt;
        while(W && i<n){
            if(W>=arr[i].weight){
                total += (arr[i].value);
                W -= arr[i].weight;
                i++;
            }else{
                total += W*((double)arr[i].value/(double)arr[i].weight);
                return total;
            }
        }
        return total;
    }
        
};

int main(){
    //size of array and weight
    int n, W;
    cin>>n>>W;
    
    Item arr[n];
    //value and weight of each item
    for(int i=0;i<n;i++){
        cin>>arr[i].value>>arr[i].weight;
    }
    
    //function call
    Solution ob;
    cout<<ob.fractionalKnapsack(W, arr, n);
    return 0;
}