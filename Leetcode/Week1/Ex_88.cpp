/**
    Exercise 88: Merge Sorted Array
    Submission Date: Mar 08, 2026 18:01
*/

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int midx = m - 1;
    int nidx = n - 1;
    int ridx = m + n - 1;

    while (nidx >= 0) {
        if (midx >= 0 && nums1[midx] > nums2[nidx]) {
            nums1[ridx] = nums1[midx];
            midx--;
        } else {
            nums1[ridx] = nums2[nidx];
            nidx--;
        }
        ridx--;
    }

    return;
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    merge(nums1, 3, nums2, 3);
    for (int num : nums1) {
        cout << num << " " ;
    }
}