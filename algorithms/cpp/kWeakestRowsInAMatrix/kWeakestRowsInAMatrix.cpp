#include <algorithm>
#include <vector>

class Solution {
public:
  std::vector<int> kWeakestRows(std::vector<std::vector<int>> &mat, int k) {
    int m = mat.size();
    std::vector<int> scores(m);
    for (int row = 0; row < m; row++) {
      scores[row] = sumRow(mat[row]) * m + row;
    }
    std::sort(scores.begin(), scores.end());
    std::vector<int> kWeakest(k);
    for (int i = 0; i < k; i++) {
      kWeakest[i] = scores[i] % m;
    }
    return kWeakest;
  }

private:
  int sumRow(const std::vector<int> &row) {
    int res = 0;
    for (const auto &e : row) {
      if (e == 0) {
        break;
      }
      res++;
    }
    return res;
  }
};
