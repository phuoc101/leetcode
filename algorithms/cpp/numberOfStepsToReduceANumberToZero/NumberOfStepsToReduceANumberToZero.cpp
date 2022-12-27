#include <limits>
#include <bitset>
#include <cmath>

class Solution {
public:
  int numberOfSteps(int num) {
    if (num == 0) {
      return 0;
    }
    constexpr std::size_t MAX_BITS = std::numeric_limits<int>::digits;
    const std::bitset<MAX_BITS> bits(num);
    return bits.count()*2 + (std::log2(num) + 1 - bits.count()) - 1;
  } 
};

