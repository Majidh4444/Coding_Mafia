#include<bits/stdc++.h>
using namespace std;



class Solution{
  public:
        vector <int> rotate (int n, int d){
            vector<int> v;
            d %= 16;
            unsigned short int x = (n<<d)| (n>>(16-d));
            unsigned short int y = (n>>d)| (n<<(16-d));
            v.push_back(x);
            v.push_back(y);
            return v;
        }
};



int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
