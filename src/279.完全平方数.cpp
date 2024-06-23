/*
 * @lc app=leetcode.cn id=279 lang=cpp
 *
 * [279] 完全平方数
 */

// @lc code=start
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
#ifdef LEETCODELOCAL
using namespace std;
#endif
class Solution {
public:
  int numSquares(int n) {
    vector<int> f(n + 1);
    for (auto i = 1; i <= n; i++) {
      auto min = INT_MAX;
      for (auto j = 1; j * j <= i; j++) {
        min = std::min(min, f[i - j * j]);
      }
      f[i] = 1 + min;
    }
    return f[n];
  }
};
// @lc code=end
