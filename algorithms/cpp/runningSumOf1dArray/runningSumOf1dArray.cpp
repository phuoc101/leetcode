#include <vector>

class Solution {
public:
  std::vector<int> runningSum(std::vector<int>& nums) {
    if (nums.size() > 2) {
      for (int i = 1; i < nums.size(); i++) {
        nums[i] += nums[i-1];
      }
    }
    // Don't care about maintaining nums in this case
    return nums;
  }
};
