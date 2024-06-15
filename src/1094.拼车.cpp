/*
 * @lc app=leetcode.cn id=1094 lang=cpp
 *
 * [1094] 拼车
 */

#include <algorithm>
#include <cassert>
#include <cstdio>
#ifdef LEETCODELOCAL
using namespace std;
#include <vector>
#endif

// @lc code=start
class DiffVector {
private:
  vector<int> diff = {};

public:
  DiffVector(const vector<int> &nums) {
    diff.resize(nums.size());
    for (size_t i = 1; i < nums.size(); i++) {
      diff[i] = nums[i] - nums[i - 1];
    }
  };

  void increase(int left, int right, int num) {
    diff[left] += num;
    if (right < diff.size() - 1)
      diff[right + 1] -= num;
  }
  const vector<int> &result() { return diff; }
};

class Solution {
public:
  bool carPooling(vector<vector<int>> &trips, int capacity) {
    auto diff = DiffVector(vector<int>(1001, 0));
    int maxIndex = 0;
    for (auto trip : trips) {
      maxIndex = max({trip[2], maxIndex});
      diff.increase(trip[1], trip[2] - 1, trip[0]);
    }
    auto res = diff.result();
    int cur = 0;
    for (size_t i = 0; i < maxIndex; i++) {
      cur += res[i];
      if (cur > capacity) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
