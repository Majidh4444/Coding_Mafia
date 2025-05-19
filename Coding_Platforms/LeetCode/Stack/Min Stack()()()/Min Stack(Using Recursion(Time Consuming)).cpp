#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s;
    int min = INT_MAX;
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    int minValue(){
        if(s.empty()) return min;
        int t = s.top();
        if(min>t) min = t;
        s.pop();
        this->minValue();
        s.push(t);
        return min;
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        min = INT_MAX;
        return this->minValue();
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
