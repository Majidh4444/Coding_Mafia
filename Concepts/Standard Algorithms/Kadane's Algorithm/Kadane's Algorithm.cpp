#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,-2,5};
    int len = 5;
    int max_current=arr[0];
        int max_global=arr[0];
        
        for(int i=1; i<len; i++){
            max_current = (arr[i]>=(arr[i]+max_current))?arr[i]:(arr[i]+max_current);
            if(max_current > max_global){
                max_global = max_current;
            }
            // cout<<max_current<<":"<<max_global<<endl;
        }
        cout<<max_global<<endl;
        return 0;
}
