/*
 * @lc app=leetcode.cn id=518 lang=cpp
 *
 * [518] 零钱兑换 II
 */

// @lc code=start
using namespace std;
#include <vector>
class Solution {
public:
  int change(int amount, vector<int> &coins) {
    if (coins.size() == 0) {
      return 0;
    }
    vector<int> dp = vector<int>(amount + 1, 0);
    dp[0] = 1;
    for (auto i = 1; i <= coins.size(); i++) {
      for (auto j = 1; j <= amount; j++) {
        if (j - coins[i - 1] >= 0) {
          dp[j] = dp[j] + dp[j - coins[i - 1]];
        }
      }
    }
    return dp[amount];
    // vector<vector<int>> dp =
    //     vector<vector<int>>(coins.size() + 1, vector<int>(amount + 1, 0));
    // for (int i = 1; i <= coins.size(); i++)
    //   dp[i][0] = 1;
    // for (auto i = 1; i <= coins.size(); i++) {
    //   for (auto j = 1; j <= amount; j++) {
    //     if (j - coins[i - 1] >= 0) {
    //       dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
    //     } else {
    //       dp[i][j] = dp[i - 1][j];
    //     }
    //   }
    // }
    // return dp[coins.size()][amount];
  }
};
// @lc code=end
