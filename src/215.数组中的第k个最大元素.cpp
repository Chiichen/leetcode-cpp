/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
  int findKthLargest(vector<int> &nums, int k) {
    priority_queue<int> pq;
    for (auto i : nums) {
      pq.push(i);
    }
    for (int i = 0; i < k - 1; i++) {
      pq.pop();
    }
    return pq.top();
  }
};
// @lc code=end
