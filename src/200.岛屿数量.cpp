/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
private:
  vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  int res = 0;

public:
  int numIslands(vector<vector<char>> &grid) {

    for (int i = 0; i < grid.size(); i++) {
      for (int j = 0; j < grid[0].size(); j++) {
        if (grid[i][j] == '1') {
          res++;
          dfs(grid, i, j);
        }
      }
    }
    return res;
  }
  void dfs(vector<vector<char>> &grid, int i, int j) {
    int m = grid.size(), n = grid[0].size();
    if (i < 0 || j < 0 || i >= m || j >= n) {
      return;
    }

    if (grid[i][j] == '0') {
      return;
    }
    grid[i][j] = '0';
    for (auto d : dirs) {
      int next_i = i + d[0];
      int next_j = j + d[1];
      if (next_i < 0 || next_j < 0 || next_i >= m || next_j >= n) {
        continue;
      }
      if (grid[next_i][next_j] == '1') {
        dfs(grid, next_i, next_j);
      }
    }
  }
};
// @lc code=end
