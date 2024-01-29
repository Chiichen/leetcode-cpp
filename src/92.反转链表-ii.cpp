/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
private:
  ListNode *node = nullptr;

public:
  ListNode *reverseBetween(ListNode *head, int left, int right) {
    if (left == 1) {
      return reverseN(head, right);
    }
    head->next = reverseBetween(head->next, left - 1, right - 1);
    return head;
  }
  ListNode *reverseN(ListNode *head, int n) {
    if (n == 1) {
      node = head->next;
      return head;
    }
    auto last = reverseN(head->next, n - 1);
    head->next->next = head;
    head->next = node;
    return last;
  }
};
// @lc code=end
