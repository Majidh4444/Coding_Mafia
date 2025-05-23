#include <iostream>
#include <queue>
  
using namespace std;
  
// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
  
// Driver Code
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
  
    cout << "The queue gquiz is : ";
    showq(gquiz);
  
    cout << "gquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
  
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);
  
    return 0;
}
