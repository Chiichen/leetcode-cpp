/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
#ifdef LEETCODELOCAL
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
  ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return head;
    else {
      ListNode *newhead = reverseList(head->next);
      head->next->next = head;
      head->next = nullptr;
      return newhead;
    }
  }
};

// @lc code=end
