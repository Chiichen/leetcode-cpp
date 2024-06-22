/*
 * @lc app=leetcode.cn id=1584 lang=cpp
 *
 * [1584] 连接所有点的最小费用
 */

// @lc code=start
#include <algorithm>
#include <csetjmp>
#include <iostream>
#include <istream>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
  // /// Prim Algorithm
  // int minCostConnectPoints(vector<vector<int>> &points) {
  //   auto cmp = [](const tuple<int, int> &left, const tuple<int, int> &right)
  //   {
  //     return std::get<1>(left) > std::get<1>(right);
  //   };
  //   priority_queue<tuple<int, int>, vector<tuple<int, int>>, decltype(cmp)>
  //   pq(
  //       cmp);
  //   vector<bool> visited = vector<bool>(points.size(), false);
  //   auto cut = [&](int start) {
  //     for (auto i = 0; i < points.size(); i++) {
  //       if (visited[i] || start == i) {
  //         continue;
  //       }
  //       pq.push({i, abs(points[start][0] - points[i][0]) +
  //                       abs(points[start][1] - points[i][1])});
  //     };
  //   };
  //   int cost = 0;
  //   visited[0] = true;
  //   cut(0);
  //   while (!pq.empty()) {
  //     auto point = pq.top();
  //     pq.pop();
  //     if (visited[std::get<0>(point)]) {
  //       continue;
  //     }
  //     visited[std::get<0>(point)] = true;
  //     cost += std::get<1>(point);
  //     cut(std::get<0>(point));
  //   };
  //   return cost;
  // }

  /// Kruskal Algorithm
  int minCostConnectPoints(vector<vector<int>> &points) {
    class UF {
    private:
      vector<int> parent;

    public:
      UF(int size) {
        parent.resize(size, 0);
        for (auto i = 0; i < parent.size(); i++) {
          parent[i] = i;
        }
      }
      int find(int i) {
        if (parent[i] != i) {
          parent[i] = find(parent[i]);
        }
        return parent[i];
      }
      void join(int source, int target) {
        auto ps = find(source);
        auto pt = find(target);
        if (ps == pt) {
          return;
        } else {
          parent[ps] = pt;
        }
      }
      bool is_connect(int source, int target) {
        auto ps = find(source);
        auto pt = find(target);
        if (ps == pt) {
          return true;
        } else {
          return false;
        }
      };
    };
    auto cmp = [](const tuple<pair<int, int>, int> &left,
                  const tuple<pair<int, int>, int> &right) {
      return std::get<1>(left) < std::get<1>(right);
    };
    vector<tuple<pair<int, int>, int>> a;
    for (auto i = 0; i < points.size(); i++) {
      for (auto j = 0; j < points.size(); j++) {
        if (i == j) {
          continue;
        }
        a.push_back({{i, j},
                     abs(points[i][0] - points[j][0]) +
                         abs(points[i][1] - points[j][1])});
      }
    }
    sort(a.begin(), a.end(), cmp);
    int cost = 0;
    UF uf = UF(a.size());
    for (auto i = 0; i < a.size(); i++) {
      auto point = std::get<0>(a[i]);
      if (uf.is_connect(point.first, point.second)) {
        continue;
      } else {
        cost += std::get<1>(a[i]);
        uf.join(point.first, point.second);
      }
    }
    return cost;
  }
};
// @lc code=end
