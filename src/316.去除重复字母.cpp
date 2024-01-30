/*
 * @lc app=leetcode.cn id=316 lang=cpp
 *
 * [316] 去除重复字母
 */

// @lc code=start
#include <algorithm>
#include <stack>
#include <string>

using namespace std;
class Solution {
public:
  string removeDuplicateLetters(string s) {
    int instk[256] = {};
    int count[256] = {};
    for (auto ch : s) {
      count[ch]++;
    }
    stack<char> stk{};
    for (auto ch : s) {
      count[ch]--;
      if (instk[ch]) {
        continue;
      }
      while (!stk.empty() && ch < stk.top()) {
        if (!count[stk.top()]) {
          break;
        }
        instk[stk.top()]--;
        stk.pop();
      }
      stk.push(ch);
      instk[ch]++;
    }
    string ans = "";
    while (!stk.empty()) {
      ans.push_back(stk.top());
      stk.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
  }
};
// @lc code=end
