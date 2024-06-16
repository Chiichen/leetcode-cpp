/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#ifdef LEETCODELOCAL
using namespace std;
#include <string>
#endif
class Solution {
public:
  bool isMatch(string s, string p) { return dp(s, 0, p, 0); }

  bool dp(string &s, int i, string &p, int j) {
    if (j == p.size())
      return i == s.size();
    if (i == s.size()) { // Case s = "aa" and p = "a*"
      if ((p.size() - j) % 2 == 1)
        return false;
      for (; j + 1 < p.size(); j += 2) {
        if (p[j + 1] != '*')
          return false;
      }
      return true;
    }

    if (s[i] == p[j] || p[j] == '.') {
      if (j + 1 < p.size() && p[j + 1] == '*') {
        return dp(s, i, p, j + 2) || dp(s, i + 1, p, j);
      } else {
        return dp(s, i + 1, p, j + 1);
      }
    } else if (j + 1 < p.size() && p[j + 1] == '*') {
      return dp(s, i, p, j + 2);
    } else {
      return false;
    }
  }
};
// @lc code=end
