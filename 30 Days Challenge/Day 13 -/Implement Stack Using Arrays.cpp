#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class st{
    int top;

    public:
        int arr[MAX];
        
        st(){
            top = -1;
        }

        bool push(int x){
            if(top >= MAX-1){
                cout<<"Stack Overflowed"<<endl;
                return false;
            }else{
                arr[++top] = x;
                cout<<x<<" pushed into the stack"<<endl;
                return true;
            }
        }

        int pop(){
            if(top<0){
                cout<<"Stack underflowed"<<endl;
                return 0;
            }
            int x = arr[top--];
            return x;
        }

        int peek(){
            if(top<0){
                cout<<"Stack is Empty"<<endl;
                return 0;
            }else return arr[top];
        }

        bool isEmpty(){
            return top<0;
        }
};

int main(){
    class st s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<" Popped from stack"<<endl;
    cout<<"Elements present in stack : ";
    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
    return 0;
}
