#include <bits/stdc++.h>
using namespace std;

class Solution{
    priority_queue<int, vector<int>, greater<int>> g;
    priority_queue<int> s;
    
    public:

    void insertHeap(int &x){
    	int t = x;
    	if(s.size() > g.size()){
    		if(s.top()>x){
    			t = s.top();
    			s.pop();
    			s.push(x);
    		}
    		g.push(t);
    	}else{
    		if(!g.empty() && g.top()<x){
    			t = g.top();
    			g.pop();
    			g.push(x);
    		}
    		s.push(t);
    	}
    }
    
    double getMedian(){
        if(s.size()>g.size()) return s.top();
        else return ((float)(s.top()+g.top())/2.0);
    }
};

int main(){
	Solution ob;
	int n,x;
	cin >> n;
	for(int i = 1;i<= n; ++i)
	{
		cin >> x;
		ob.insertHeap(x);
	    cout << floor(ob.getMedian()) << endl;
	}
	return 0;
}

//Input:
//4
//5
//15
//1
//3
//Output:
//5
//10
//5
//4
