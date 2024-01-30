/*
 * @lc app=leetcode.cn id=503 lang=cpp
 *
 * [503] 下一个更大元素 II
 */

// @lc code=start
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> nextGreaterElements(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans{};
    ans.resize(n);
    stack<int> stk;
    for (int i = 2 * n - 1; i >= 0; i--) {
      while (!stk.empty() && stk.top() <= nums[i % n]) {
        stk.pop();
      }
      ans[i % n] = (stk.empty() ? -1 : stk.top());
      stk.push(nums[i % n]);
    }
    return ans;
  }
};
// @lc code=end
