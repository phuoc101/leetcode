class Solution {
public:
  int romanToInt(string s) {
    int res = 0;
    char prev_c = '\0';
    for (const auto &c : s) {
      switch (c) {
      case 'I':
        res += 1;
        break;
      case 'V':
        res += 5;
        if (prev_c == 'I') {
          res -= 2;
        }
        break;
      case 'X':
        res += 10;
        if (prev_c == 'I') {
          res -= 2;
        }
        break;
      case 'L':
        res += 50;
        if (prev_c == 'X') {
          res -= 20;
        }
        break;
      case 'C':
        res += 100;
        if (prev_c == 'X') {
          res -= 20;
        }
        break;
      case 'D':
        res += 500;
        if (prev_c == 'C') {
          res -= 200;
        }
        break;
      case 'M':
        res += 1000;
        if (prev_c == 'C') {
          res -= 200;
        }
        break;
      default:
        break;
      }
      prev_c = c;
    }
    return res;
  }
};
