/**
    Exercise 1431: Kids With the Greatest Number of Candies
    Submission Date: Mar 10, 2026 13:25
*/

#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;

    int max = candies[0];
    for (int i = 1; i < candies.size(); i++) {
        if (max < candies[i]) {
            max = candies[i];
        }
    }

    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies >= max) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }

    return result;
}

int main() {
    vector<int> candies = {2,3,5,1,3};
    vector<bool> result = kidsWithCandies(candies, 3);

    for (bool val : result) {
        cout << val << " ";
    }
}