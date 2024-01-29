/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
#ifdef LEETCODELOCAL
// Definition for singly-linked list.

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
#endif
class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    auto slow = head, fast = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        break;
      }
    }
    if (fast == nullptr || fast->next == nullptr) {
      return nullptr;
    }
    slow = head;
    while (slow != fast) {
      fast = fast->next;
      slow = slow->next;
    }
    return slow;
  }
};
// @lc code=end
