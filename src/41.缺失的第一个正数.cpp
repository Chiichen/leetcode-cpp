/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
#include <utility>
using namespace std;
#include <vector>
class Solution {
public:
  int firstMissingPositive(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      while (nums[i] != i + 1) {
        if (nums[i] > 0 && nums[i] <= nums.size() &&
            nums[i] != nums[nums[i] - 1]) {
          int idx = nums[i] - 1;
          swap(nums[idx], nums[i]);
        } else {
          break;
        }
      }
    }
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != i + 1) {
        return i + 1;
      }
    }
    return nums.size() + 1;
  }
};
// @lc code=end
