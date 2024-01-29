/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    if (nums.size() == 0 || k == 0)
      return {};
    vector<int> ans{};
    auto cmp = [](pair<int, int> l, pair<int, int> r) {
      return l.first < r.first;
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(
        cmp);
    int left = 0, right = 0;
    while (right < nums.size()) {
      int val = nums[right];
      pq.push(pair<int, int>(val, right));
      right++;
      while (right - left >= k) {
        int left_val = nums[left];
        ans.push_back(pq.top().first);
        left++;
        while (!pq.empty() && left > pq.top().second) {
          pq.pop();
        }
      }
    }
    return ans;
  }
};
// @lc code=end
