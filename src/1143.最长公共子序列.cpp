/*
 * @lc app=leetcode.cn id=1143 lang=cpp
 *
 * [1143] 最长公共子序列
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;
#include <string>
class Solution {
public:
  int longestCommonSubsequence(string text1, string text2) {
    if (text1.empty() || text2.empty()) {
      return 0;
    }
    vector<vector<int>> dp = {};
    auto size1 = text1.size();
    auto size2 = text2.size();
    dp.resize(size1 + 1, vector<int>(size2 + 1, 0));
    for (int i = 1; i <= size1; i++) {
      for (int j = 1; j <= size2; j++) {
        if (text1[i - 1] == text2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
        } else {
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
      }
    }
    return dp[size1][size2];
  }
};
// @lc code=end
