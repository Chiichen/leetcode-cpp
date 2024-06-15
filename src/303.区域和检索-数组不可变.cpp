/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start

#include <cstddef>
#include <cstdio>
#ifdef LEETCODELOCAL
#include <vector>
using namespace std;
#endif
class NumArray {
private:
  vector<int> sum = {};

public:
  NumArray(vector<int> &nums) {
    sum.resize(nums.size());
    for (size_t i = 0; i < nums.size(); i++) {
      if (i != 0) {
        sum[i] = sum[i - 1] + nums[i];
      } else {
        sum[i] = nums[i];
      }
    }
  }

  int sumRange(int left, int right) {
    if (left == 0) {
      return sum[right];
    } else {
      return sum[right] - sum[left - 1];
    }
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end
