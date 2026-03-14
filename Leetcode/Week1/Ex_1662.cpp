/**
    Exercise 1662: Check If Two String Arrays are Equivalent
    Submission Date: Mar 08, 2026 18:35
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int pointer1 = 0;
    int idx1 = 0;
    int pointer2 = 0;
    int idx2 = 0;

    while (pointer1 < word1.size() && pointer2 < word2.size()) {
        char char1 = word1[pointer1][idx1];
        char char2 = word2[pointer2][idx2];

        if (char1 != char2) {
            return false;
        }

        idx1++;
        idx2++;

        if (idx1 == word1[pointer1].length()) {
            pointer1++;
            idx1 = 0;
        } 

        if (idx2 == word2[pointer2].length()) {
            pointer2++;
            idx2 = 0;
        }
    }

    return pointer1 == word1.size() && pointer2 == word2.size();
}

int main() {
    vector<string> word1 = {"ab", "c"};
    vector<string> word2 = {"a", "bc"};
    cout << arrayStringsAreEqual(word1, word2);
}