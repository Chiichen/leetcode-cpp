/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
using namespace std;
#include <vector>
class Solution {
public:
  bool canPartition(vector<int> &nums) {
    auto sum = 0;
    for (auto num : nums) {
      sum += num;
    }
    if (sum % 2 == 1) {
      return false;
    }
    sum = sum / 2;
    vector<int> dp = vector<int>(sum + 1);
    dp[0] = true;
    for (auto i = 1; i <= nums.size(); i++) {
      for (auto j = sum; j >= 0; j--) {
        if (j - nums[i - 1] >= 0) {
          dp[j] = dp[j] || dp[j - nums[i - 1]];
        }
      }
    }
    return dp[sum];
  }
};
// @lc code=end
