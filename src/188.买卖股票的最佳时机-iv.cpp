/*
 * @lc app=leetcode.cn id=188 lang=cpp
 *
 * [188] 买卖股票的最佳时机 IV
 */

// @lc code=start
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
class Solution {

public:
  int maxProfit(int k, vector<int> &prices) {
    vector<vector<vector<int>>> dp(
        prices.size() + 1, vector<vector<int>>(k + 1, vector<int>(2, 0)));
    for (int i = 0; i < prices.size(); i++) {
      dp[i][0][1] = INT_MIN;
      dp[i][0][0] = 0;
    }
    for (int j = k; j >= 1; j--) {
      dp[0][j][0] = 0;
      dp[0][j][1] = -prices[0];
    }
    for (int i = 1; i <= prices.size(); i++) {
      for (int j = k; j >= 1; j--) {
        dp[i][j][0] = max(dp[i - 1][j][1] + prices[i - 1], dp[i - 1][j][0]);
        dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - 1][0] - prices[i - 1]);
      }
    }
    return dp[prices.size()][k][0];
  }
};
// @lc code=end
