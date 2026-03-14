/**
    Exercise 383: Ransom Note
    Submission Date: Mar 12, 2026 18:26
*/

#include <iostream>
#include <unordered_map>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    if (ransomNote.length() > magazine.length()) {
        return false;
    }
    
    unordered_map<char, int> count;

    for (char c : magazine) {
        count[c]++;
    }

    for (char c : ransomNote) {
        count[c]--;
        if (count[c] < 0) return false;
    }

    return true;
}

int main() {
    cout << canConstruct("aa", "aab");
}