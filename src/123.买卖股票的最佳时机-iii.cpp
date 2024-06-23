/*
 * @lc app=leetcode.cn id=123 lang=cpp
 *
 * [123] 买卖股票的最佳时机 III
 */

// @lc code=start
#include <algorithm>
#include <climits>
#ifdef LEETCODELOCAL
#include <vector>
using namespace std;
#endif
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    // General Solution
    //  vector<vector<vector<int>>> dp(prices.size() + 1,
    //                                 vector<vector<int>>(3, vector<int>(2,
    //                                 0)));
    //  for (int i = 0; i < prices.size(); i++) {
    //    dp[i][0][1] = INT_MIN;
    //    dp[i][0][0] = 0;
    //  }
    //  for (int j = 2; j >= 1; j--) {
    //    dp[0][j][0] = 0;
    //    dp[0][j][1] = -prices[0];
    //  }
    //  for (int i = 1; i <= prices.size(); i++) {
    //    for (int j = 2; j >= 1; j--) {
    //      dp[i][j][0] = max(dp[i - 1][j][1] + prices[i - 1], dp[i - 1][j][0]);
    //      dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0] - prices[i -
    //      1]);
    //    }
    //  }
    //  return dp[prices.size()][2][0];
    // Optimized Solution
    auto dp1_0 = 0, dp2_0 = 0;
    auto dp1_1 = -prices[0], dp2_1 = -prices[0];
    for (auto price : prices) {
      dp2_0 = max(dp2_1 + price, dp2_0);
      dp2_1 = max(dp2_1, dp1_0 - price);
      dp1_0 = max(dp1_1 + price, dp1_0);
      dp1_1 = max(dp1_1, -price);
    }
    return dp2_0;
  }
};
// @lc code=end
