/**
    Exercise 20: Valid Parentheses
    Submission Date: Mar 08, 2026 18:18
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> temp;

    for (char c : s) {
        if ( c == '(' || c == '{' || c == '[') {
            temp.push(c);
        } else {
            if (temp.empty()) return false;

            if ( c == ')' && temp.top() != '(') return false;
            if ( c == '}' && temp.top() != '{') return false;
            if ( c == ']' && temp.top() != '[') return false;

            temp.pop();
        }
    }

    return temp.empty();
}

int main() {
    cout << isValid("{[()]}");
}