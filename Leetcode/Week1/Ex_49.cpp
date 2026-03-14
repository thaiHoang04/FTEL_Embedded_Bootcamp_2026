/**
    Exercise 49: Group Anagrams
    Submission Date: Mar 14, 2026 12:26
*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, int> word_check;
    vector<vector<string>> group;
    int numberOfGroup = 0;

    for (string s : strs) {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());

        if (word_check.count(sortedStr)) {
            group[word_check[sortedStr]].push_back(s);
        } else {
            word_check.insert({sortedStr, numberOfGroup});
            group.push_back({s});
            numberOfGroup++;
        }
    }

    return group;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result = groupAnagrams(strs);
}