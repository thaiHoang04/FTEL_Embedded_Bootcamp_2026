/**
    Exercise 232: Implement Queue using Stacks
    Implement a queue using only the push, pop, peek, and empty operations of two stacks.
    Submission Date: Mar 19, 2026 23:23
*/

#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;

    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }

        st1.push(x);

        while (!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int result = st1.top();
        st1.pop();

        return result;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};


int main() {
    MyQueue* obj = new MyQueue();

    obj->push(1);
    obj->push(2);

    int param_2 = obj->peek();

    cout << param_2 << endl;

    int param_3 = obj->pop();

    cout << param_3 << endl;

    bool param_4 = obj->empty();

    cout << param_4 << endl;
}