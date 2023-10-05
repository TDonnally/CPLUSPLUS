#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int mergedCount = 0;
    int count1 = 0;
    int count2 = 0;
    vector<int> mergedVector(m + n);

    while (mergedCount < m + n) {
        if (count1 < m && (count2 >= n || nums1[count1] <= nums2[count2])) {
            mergedVector[mergedCount] = nums1[count1];
            count1++;
        } else {
            mergedVector[mergedCount] = nums2[count2];
            count2++;
        }
        mergedCount++;
    }

    for (int i = 0; i < m + n; i++) {
        nums1[i] = mergedVector[i]; // Copy merged elements back to nums1
    }
}
};

// main() is where program execution begins.
int main() {
    Solution s;

    vector<int> nums1 = {1, 2, 3, 0};
    int m = 3;
    vector<int> nums2 = {};
    int n = 1;
    s.merge(nums1, m, nums2, n);
    
    for(int i = 0; i < m+n; i++){
        cout  << nums1[i];
    }
    
    return 0;
}