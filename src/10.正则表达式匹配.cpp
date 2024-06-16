/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#include <vector>
#ifdef LEETCODELOCAL
using namespace std;
#include <string>
#endif
class Solution {
public:
  bool isMatch(string s, string p) {
    auto matches = [&](int i, int j) {
      if (i == 0)
        return false;
      if (p[j - 1] == '.') {
        return true;
      }
      return s[i - 1] == p[j - 1];
    };
    vector<vector<bool>> dp =
        vector<vector<bool>>(s.size() + 1, vector<bool>(p.size() + 1, false));
    dp[0][0] = true;
    for (auto i = 0; i <= s.size(); i++) {
      for (auto j = 1; j <= p.size(); j++) {
        if (p[j - 1] == '*') {
          if (matches(i, j - 1)) {
            dp[i][j] = dp[i][j - 2] || dp[i - 1][j] || dp[i][j];
          } else {
            dp[i][j] = dp[i][j - 2] || dp[i][j];
          }

        } else if (matches(i, j)) {
          dp[i][j] = dp[i][j] || dp[i - 1][j - 1];
        }
      }
    }
    return dp[s.size()][p.size()];
  }
};
// #ifdef LEETCODELOCAL
// using namespace std;
// #include <string>
// #endif
// class Solution {
// public:
//   bool isMatch(string s, string p) { return dp(s, 0, p, 0); }

//   bool dp(string &s, int i, string &p, int j) {
//     if (j == p.size())
//       return i == s.size();
//     if (i == s.size()) { // Case s = "aa" and p = "a*"
//       if ((p.size() - j) % 2 == 1)
//         return false;
//       for (; j + 1 < p.size(); j += 2) {
//         if (p[j + 1] != '*')
//           return false;
//       }
//       return true;
//     }

//     if (s[i] == p[j] || p[j] == '.') {
//       if (j + 1 < p.size() && p[j + 1] == '*') {
//         return dp(s, i, p, j + 2) || dp(s, i + 1, p, j);
//       } else {
//         return dp(s, i + 1, p, j + 1);
//       }
//     } else if (j + 1 < p.size() && p[j + 1] == '*') {
//       return dp(s, i, p, j + 2);
//     } else {
//       return false;
//     }
//   }
// };
// @lc code=end
