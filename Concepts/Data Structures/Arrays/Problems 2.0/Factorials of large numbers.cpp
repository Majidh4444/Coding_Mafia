#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> v;
        v.push_back(1);
        int i = 1;
        int buffer = 0;
        while(i<=N){
            int j = 0;
            int buffer = 0;
            while(j<v.size()){
                int m = i*v[j];
                m += buffer;
                if(m<10){
                     v[j] = m;
                     buffer = 0;
                }else{
                    buffer = m/10;
                    v[j] = m%10;
                }
                j++;
            }
            if(buffer != 0){
                while(buffer){
                    v.push_back(buffer%10);
                    buffer /= 10;
                }
            }
            i++;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};

int main() {
    int N;
    cin >> N;
    Solution ob;
    vector<int> result = ob.factorial(N);
    for (int i = 0; i < result.size(); ++i){
        cout<< result[i];
    }
    return 0;
}