#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class que{
    int front,rear;

    public:
        int arr[MAX];

        que(){
            front = -1;
            rear = -1;
        }

        bool enqueue(int x){
            if(rear == MAX-1){
                cout<<"Queue is Full"<<endl;
                return false;
            }
            if(front == -1) front++;
            arr[++rear] = x;
            return true;
        }

        int dequeue(){
            if(front == rear){
                cout<<"Queue is Enpty"<<endl;
                return -1;
            }
            cout<<arr[front]<<" removed from a queue"<<endl;
            int x = arr[front++];
            if(front == rear){
                front = rear = -1;
            }
            return x;
        }

        void display(){
            if(rear == -1){
                cout<<"Queue is Empty"<<endl;
            }else{
                cout<<"Elements in queue are: ";
                for(int i=front;i<=rear;i++) cout<<arr[i]<<" ";
            }
        }
};

int main(){
    class que q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<"->"<<q.dequeue()<<endl;
    q.display();
    return 0;
}

