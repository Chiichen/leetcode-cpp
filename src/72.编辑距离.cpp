/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {

public:
  int minDistance(string word1, string word2) {
    auto size1 = word1.size();
    auto size2 = word2.size();
    vector<vector<int>> dp(size1 + 1, vector<int>(size2 + 1, 0));
    for (int i = 0; i <= size1; i++) {
      dp[i][0] = i;
    }
    for (int j = 0; j <= size2; j++) {
      dp[0][j] = j;
    }
    for (int i = 1; i <= size1; i++) {
      for (int j = 1; j <= size2; j++) {
        if (word1[i - 1] == word2[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1];
        } else {
          dp[i][j] = min(dp[i - 1][j] + 1,
                         min(dp[i - 1][j - 1] + 1, dp[i][j - 1] + 1));
        }
      }
    }
    return dp[size1][size2];
  }
};
// @lc code=end
