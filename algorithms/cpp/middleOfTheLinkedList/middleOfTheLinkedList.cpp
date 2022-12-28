// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      // base case: list only has 1 value
      if (head->next == nullptr) {
        return head;
      }
      auto it = head;
      int count = 0;
      while (it != nullptr) {
        count++;
        it = it->next;
      }
      int mid = count / 2 + 1;
      count = 0;
      it = head;
      while (it != nullptr) {
        if (++count == mid) {
          return it;
        }
        it = it->next;
      }
      return nullptr;
    }
};
