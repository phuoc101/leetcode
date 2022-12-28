#include <vector>
#include <unordered_map>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int,int> checked_set;
    for (int i = 0; i < nums.size(); i++) {
      if (!checked_set.empty()) {
        auto num_search = checked_set.find(target - nums[i]);
        if (num_search != checked_set.end()) {
          return std::vector<int>{num_search->second, i};
        }
      }
      checked_set.insert({nums[i], i});
    }
    return std::vector<int>{-1, -1};
  }
};
