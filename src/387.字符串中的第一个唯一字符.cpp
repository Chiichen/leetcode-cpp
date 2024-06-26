/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  int firstUniqChar(string s) {
    unordered_map<int, int> fre;
    for (auto e : s) {
      ++fre[e];
    }
    for (int i = 0; i < s.size(); i++) {
      if (fre[s[i]] == 1)
        return i;
    }
    return -1;
  }
};
// @lc code=end
