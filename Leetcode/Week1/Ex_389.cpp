/**
    Exercise 1431: Find the Difference
    Submission Date: Mar 10, 2026 14:13
*/

#include <iostream>

using namespace std;

char findTheDifference(string s, string t) {
    char result = 0;

    for (char c : s) result ^= c;
    
    for (char c : t) result ^= c;

    return result;
}

int main() {
    cout << findTheDifference("abcd", "abcde");
}