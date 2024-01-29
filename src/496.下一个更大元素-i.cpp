/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
#include <stack>
#include <unordered_map>
using namespace std;
#include <vector>
class Solution {
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> map;
    vector<int> ans{};
    auto greater_nums2 = nextGreaterElement(nums2);
    for (int i = 0; i < nums2.size(); i++) {
      map.insert(pair<int, int>(nums2[i], greater_nums2[i]));
    }
    for (auto i : nums1) {
      ans.push_back(map[i]);
    }
    return ans;
  }
  vector<int> nextGreaterElement(vector<int> &nums) {
    vector<int> ans;
    int n = nums.size();
    ans.resize(n);
    stack<int> stk;
    for (int i = n - 1; i >= 0; i--) {
      while (!stk.empty() && stk.top() <= nums[i]) {
        stk.pop();
      }
      ans[i] = stk.empty() ? -1 : stk.top();
      stk.push(nums[i]);
    }
    return ans;
  }
};
// @lc code=end
