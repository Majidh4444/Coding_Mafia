//Implementing Stack using STL
#include <iostream>
#include <stack>
using namespace std;


int main() {
    stack<int> stack,mystack;
	    
	stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    
    mystack.push(3);
    mystack.push(5);
    mystack.push(7);
    mystack.push(9);
     
    stack.pop();
    stack.pop();
    
    cout<<"Before Swap stack will be:"<<endl;
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
    
    cout<<endl;
    cout<<"After Swap stack will be:"<<endl;
    mystack.swap(stack);
    while (!stack.empty()) {
        cout << ' ' << stack.top();
        stack.pop();
    }
}
