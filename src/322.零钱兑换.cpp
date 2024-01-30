/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */

// @lc code=start
#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
class Solution {

private:
  vector<int> memo = {};

public:
  int coinChange(vector<int> &coins, int amount) {
    memo.resize(amount + 1, -6);
    return dp(coins, amount);
  }
  int dp(vector<int> &coins, int amount) {

    if (amount == 0) {
      return 0;
    } else if (amount < 0) {
      return -1;
    }
    if (memo[amount] != -6) {
      return memo[amount];
    }
    int res = INT_MAX;
    for (auto coin : coins) {
      auto sub = dp(coins, amount - coin);
      if (sub == -1) {
        continue;
      }
      res = min(res, sub + 1);
    }
    memo[amount] = (res == INT_MAX ? -1 : res);
    return memo[amount];
  }
};
// @lc code=end
