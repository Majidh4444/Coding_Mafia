#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
        //   unordered_map<int,int>m1,m2,m3;
        //   vector<int> v;
        //   for(int i=0;i<n1;i++) m1[A[i]]++;
        //   for(int i=0;i<n2;i++) m2[B[i]]++;
        //   for(int i=0;i<n3;i++) m3[C[i]]++;
           
        //   for(int i=0;i<n1;i++){
        //       if(m1[A[i]]>0 && m2[A[i]]>0 && m3[A[i]]>0 ) {
        //           v.push_back(A[i]);
        //           //* Stopping to print the duplicates
        //           m1[A[i]]=0;
        //       }
        //   }
           
        //   return v;
        
        //* Without Using data structures
            int i=0,j=0,k=0;
            vector<int> v;
            
            while(i<n1 and j<n2 and k<n3){
                //* if all are same then we can push
                if(A[i] == B[j] and B[j] == C[k]){
                    v.push_back(A[i]);
                    i++;j++;k++;
                }
                //* if A[i] less than B[j] then increment i to get the value of B[j]
                //* And do this similarly in all cases
                else if(A[i] < B[j]) i++;
                else if(B[j] < C[k]) j++;
                else k++;
                
                while(A[i-1] == A[i]) i++;
                while(B[j-1] == B[j]) j++;
                while(C[k-1] == C[k]) k++;
            }
            
            return v;
        }

};


int main (){
    int n1, n2, n3; 
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];
    
    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];
    for (int i = 0; i < n3; i++) cin >> C[i];
    
    Solution ob;
    
    vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
    if (res.size () == 0) 
        cout << -1;
    for (int i = 0; i < res.size (); i++) 
        cout << res[i] << " ";   
}