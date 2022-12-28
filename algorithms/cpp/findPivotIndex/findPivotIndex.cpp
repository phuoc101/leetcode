#include <vector>
#include <numeric>

class Solution {
public:
  int pivotIndex(std::vector<int>& nums) {
    int left = 0;
    int right = std::accumulate(nums.begin()+1, nums.end(), 0);
    for (int i = 0; i < nums.size() - 1; i++) {
      if (left == right) {
        return i;
      }
      left += nums[i];
      right -= nums[i+1];
    }
    // Final check for last case
    if (left == right) {
      return nums.size() - 1;
    }
    return -1;
  }
};

