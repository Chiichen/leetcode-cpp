/*
 * @lc app=leetcode.cn id=990 lang=cpp
 *
 * [990] 等式方程的可满足性
 */

// @lc code=start
#ifdef LEETCODELOCAL
using namespace std;
#include <string>
#include <vector>

#endif
class UF {
private:
  vector<int> parent;
  int count = 0;

public:
  int find(int x) {
    if (parent[x] != x) {
      parent[x] = find(parent[x]);
    }
    return parent[x];
  }
  UF(int size) {
    parent.resize(size);
    for (auto i = 0; i < parent.size(); i++) {
      parent[i] = i;
    }
    count = parent.size();
  }
  void join(int self, int target) {
    int rootSelf = find(self);
    int rootTarget = find(target);
    if (rootTarget == rootSelf)
      return;
    parent[rootSelf] = rootTarget;
    count--;
  }
  bool is_connect(int self, int target) {
    int rootSelf = find(self);
    int rootTarget = find(target);
    return rootSelf == rootTarget;
  }
};
class Solution {
public:
  bool equationsPossible(vector<string> &equations) {
    UF u = UF(26);
    vector<string> inequations = {};
    for (auto equation : equations) {
      if (equation[1] == '!') {
        inequations.push_back(equation);
        continue;
      }
      u.join(equation[0] - 'a', equation[3] - 'a');
    }
    for (auto inequation : inequations) {
      if (u.is_connect(inequation[0] - 'a', inequation[3] - 'a'))
        return false;
    }
    return true;
  }
};
// @lc code=end
