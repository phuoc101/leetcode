class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        int i = 0;
        while (i++ < n) {
          if (i % 3 == 0) {
            answer[i-1].append("Fizz");
          }
          if (i % 5 == 0) {
            answer[i-1].append("Buzz");
          }
          if (answer[i-1].empty()) {
            answer[i-1] = to_string(i);
          }
        }
        return answer;
    }
};
