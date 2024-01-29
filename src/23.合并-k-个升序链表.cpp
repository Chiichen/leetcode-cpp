/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并 K 个升序链表
 */

// @lc code=start
#ifdef LEETCODELOCAL
// Definition for singly-linked list.
#include <queue>
#include <vector>
using namespace std;
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
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    if (lists.size() == 0) {
      return nullptr;
    }
    ListNode *dummy = new ListNode(-1);
    ListNode *p = dummy;

    auto cmp = [](ListNode *n1, ListNode *n2) -> bool {
      return n1->val > n2->val;
    };

    priority_queue<ListNode *, vector<ListNode *>, decltype(cmp)> pq(cmp);

    for (auto listnode : lists) {
      if (listnode != nullptr) {
        pq.push(listnode);
      }
    }

    while (!pq.empty()) {
      auto node = pq.top();
      p->next = node;
      pq.pop();
      if (node->next != nullptr) {
        pq.push(node->next);
      }
      p = p->next;
    }
    return dummy->next;
  }
};
// @lc code=end
