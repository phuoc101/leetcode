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
    ListNode* reverseList(ListNode* head) {
      ListNode* prev = nullptr;
      ListNode* curr = head;
      ListNode* next = head->next;
      while (curr != nullptr) {
        curr->next = prev;
        prev = curr;
        curr = next;
        if (next != nullptr) {
          next = next->next;
        }
      }
      head = prev;
      return head;
    }
    bool isPalindrome(ListNode* head) {
      // base case: size of linked list == 1
      if (head->next == nullptr) {
        return true;
      }
      int sz = 0;
      ListNode* it = head;
      while (it != nullptr) {
        it = it->next;
        sz++;
      }
      ListNode* prev = nullptr;
      it = head;
      int mid = sz / 2 + sz % 2;
      sz = 0;
      while (sz < mid) {
        prev = it;
        it = it->next;
        sz++;
      }
      ListNode* mid_node = it;
      mid_node = reverseList(mid_node);
      it = head;
      while (mid_node != nullptr) {
        if (it->val != mid_node->val) {
          return false;
        }
        it = it->next;
        mid_node = mid_node->next;
      }
      return true;
    }
};
