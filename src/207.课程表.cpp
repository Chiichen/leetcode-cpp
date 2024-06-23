/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

// @lc code=start
#include <queue>
#ifdef LEETCODELOCAL
#include <vector>
using namespace std;
#endif
class Solution {
public:
  bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    vector<int> res;
    queue<int> q;
    vector<int> in;
    vector<vector<int>> g;
    in.resize(numCourses, 0);
    g.resize(numCourses, {});
    for (auto pre : prerequisites) {
      g[pre[0]].push_back(pre[1]);
      in[pre[1]]++;
    }
    for (auto i = 0; i < in.size(); i++) {
      if (in[i] == 0) {
        q.push(i);
      }
    }
    while (!q.empty()) {
      auto cur = q.front();
      q.pop();
      res.push_back(cur);
      for (auto it : g[cur]) {
        if (--in[it] == 0) {
          q.push(it);
        }
      }
    }
    if (res.size() == numCourses) {
      return true;
    } else {
      return false;
    }
  }
};
// @lc code=end
