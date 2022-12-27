#include <numeric>
#include <vector>

class Solution {
public:
  int maximumWealth(std::vector<std::vector<int>> &accounts) {
    int max = 0;
    for (const auto &wealth : accounts) {
      max = std::max(std::accumulate(wealth.begin(), wealth.end(), 0), max);
    }
    return max;
  }
};
