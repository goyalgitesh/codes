#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxGoodSubsequenceLength(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return 0;
    
    int max_length = 0;
    int start = 0;
    int mismatch_count = 0;
    
    for (int end = 1; end < n; ++end) {
        if (nums[end] != nums[end - 1]) {
            mismatch_count++;
        }
        
        while (mismatch_count > k) {
            if (nums[start] != nums[start + 1]) {
                mismatch_count--;
            }
            start++;
        }
        
        max_length = max(max_length, end - start + 1);
    }
    
    return max_length;
}

int main() {
    // Example 1
    vector<int> nums1 = {1, 2, 1, 1, 3};
    int k1 = 2;
    cout << "Example 1 Output: " << maxGoodSubsequenceLength(nums1, k1) << endl;  // Output: 4

    // Example 2
    vector<int> nums2 = {1, 2, 3, 4, 5, 1};
    int k2 = 0;
    cout << "Example 2 Output: " << maxGoodSubsequenceLength(nums2, k2) << endl;  // Output: 2

    return 0;
}
