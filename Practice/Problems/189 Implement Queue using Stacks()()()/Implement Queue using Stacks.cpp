#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1,s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        this->peek();
        int a = s2.top();
        s2.pop();
        return a;
    }
    
    /** Get the front element. */
    int peek() {
        if (!s2.empty()) return s2.top();
        while (!s1.empty()) {
            int temp = s1.top();
            s2.push(temp);
            s1.pop();
        }
        return s2.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s2.empty() && s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 
 
int main(){
	MyQueue* obj = new MyQueue();
	obj->push(10);
	int param_2 = obj->pop();
//	int param_3 = obj->peek();
	bool param_4 = obj->empty();
	cout<<param_2<<" "<<param_4;
	return 0;
}
