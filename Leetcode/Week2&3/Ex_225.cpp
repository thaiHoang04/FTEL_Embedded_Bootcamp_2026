/**
    Exercise 225: Implement Stack using Queues
    Implement a stack using only the push, pop, top, and empty operations of a queue.
    Submission Date: Mar 19, 2026 22:56
*/

#include <iostream>
#include <queue>

using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int size = q.size();

        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        int result = q.front();
        q.pop();

        return result;
    }
    
    int top() {
        int size = q.size();

        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }

        int result = q.front();
        q.push(q.front());
        q.pop();

        return result;
    }
    
    bool empty() {
        return q.empty();
    }
};


int main() {
    MyStack* obj = new MyStack();

    obj->push(1);
    obj->push(2);

    int param_2 = obj->top();

    cout << param_2 << endl;

    int param_3 = obj->pop();

    cout << param_3 << endl;

    bool param_4 = obj->empty();

    cout << param_4 << endl;
}