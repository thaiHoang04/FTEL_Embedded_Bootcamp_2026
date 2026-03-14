/**
    Exercise 1431: Find the Difference
    Submission Date: Mar 12, 2026 18:14
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> word_check;
    int maxLength = 0;
    int left = 0;

    for (int right = 0; right < s.length(); right++) {
        while(word_check.count(s[right])) {
            word_check.erase(s[left]);
            left++;
        }

        word_check.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb");
}