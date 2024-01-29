/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include <string>

using namespace std;
class Solution {
public:
  string expand(const string &s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
      left--;
      right++;
    }
    return s.substr(left + 1, right - left - 1);
  }

  string longestPalindrome(string s) {
    string res = "";
    for (int i = 0; i < s.size(); i++) {
      auto s1 = expand(s, i, i);
      auto s2 = expand(s, i, i + 1);
      res = res.size() >= s1.size() ? res : s1;
      res = res.size() >= s2.size() ? res : s2;
    }
    return res;
  }
};

// @lc code=end
