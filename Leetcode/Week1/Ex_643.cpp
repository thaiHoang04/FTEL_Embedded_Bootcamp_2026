/**
    Exercise 643: Maximum Average Subarray I
    Submission Date: Mar 12, 2026 17:39
*/

#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    if (nums.size() == 1) {
        return nums[0];
    }

    double total = (double)nums[0];

    for (int i = 1; i < k; i++) {
        total += nums[i];
    }

    double result = total;

    for (int i = k; i < nums.size(); i++) {
        total += nums[i] - nums[i - k];
        if (total > result) result = total;
    }

    return result / k;
}

int main() {
    vector<int> nums = {1,12,-5,-6,50,3};
    cout << findMaxAverage(nums, 4);
}