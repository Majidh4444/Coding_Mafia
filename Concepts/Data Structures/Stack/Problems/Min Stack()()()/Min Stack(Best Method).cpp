#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        int minval;
        if(st.empty())
            minval = val;
        else
            minval = min(st.top().second,val);
        st.push({val,minval});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
 
 
int main(){
	MinStack* obj = new MinStack();
	obj->push(-2);
	obj->push(0);
	obj->push(-3);
	cout<<"MIN: "<<obj->getMin()<<endl;
	obj->pop();
	cout<<"Top: "<<obj->top()<<endl;
	cout<<"MIN: "<<obj->getMin()<<endl;
	return 0;
}
