/*
 * @lc app=leetcode.cn id=752 lang=cpp
 *
 * [752] 打开转盘锁
 */

// @lc code=start

#include <queue>
#include <set>
using namespace std;
#include <string>
#include <vector>

class Solution {
public:
  int openLock(vector<string> &deadends, string target) {
    queue<string> q;
    set<string> visited;
    q.push("0000");
    for (auto it : deadends) {
      visited.insert(it);
    }

    int steps = 0;
    while (!q.empty()) {
      int sz = q.size();
      for (auto i = 0; i < sz; i++) {
        auto cur = q.front();
        q.pop();
        if (visited.find(cur) != visited.end()) {
          continue;
        }
        visited.insert(cur);
        if (cur == target) {
          return steps;
        }
        for (auto j = 0; j < 4; j++) {
          auto plus_str = plus_one(cur, j);
          if (visited.find(plus_str) == visited.end()) {
            q.push(plus_str);
          }
          auto minus_str = minus_one(cur, j);
          if (visited.find(minus_str) == visited.end()) {
            q.push(minus_str);
          }
        }
      }
      steps++;
    }
    return -1;
  }
  string plus_one(const string &value, int index) {
    if (value[index] == '9') {
      string ret = value;
      ret[index] = '0';
      return ret;
    } else {
      string ret = value;
      ret[index] += 1;
      return ret;
    }
  };
  string minus_one(const string &value, int index) {
    if (value[index] == '0') {
      string ret = value;
      ret[index] = '9';
      return ret;
    } else {
      string ret = value;
      ret[index] -= 1;
      return ret;
    }
  }
};
// @lc code=end
