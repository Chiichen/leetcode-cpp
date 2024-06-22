/*
 * @lc app=leetcode.cn id=1584 lang=cpp
 *
 * [1584] 连接所有点的最小费用
 */

// @lc code=start
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
class Solution {
public:
  int minCostConnectPoints(vector<vector<int>> &points) {
    auto cmp = [](const tuple<int, int> &left, const tuple<int, int> &right) {
      return std::get<1>(left) > std::get<1>(right);
    };
    priority_queue<tuple<int, int>, vector<tuple<int, int>>, decltype(cmp)> pq(
        cmp);
    vector<bool> visited = vector<bool>(points.size(), false);
    auto cut = [&](int start) {
      for (auto i = 0; i < points.size(); i++) {
        if (visited[i] || start == i) {
          continue;
        }
        pq.push({i, abs(points[start][0] - points[i][0]) +
                        abs(points[start][1] - points[i][1])});
      };
    };
    int cost = 0;
    visited[0] = true;
    cut(0);
    while (!pq.empty()) {
      auto point = pq.top();
      pq.pop();
      if (visited[std::get<0>(point)]) {
        continue;
      }
      visited[std::get<0>(point)] = true;
      cost += std::get<1>(point);
      cut(std::get<0>(point));
    };
    return cost;
  }
};
// @lc code=end
