/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include <vector>

using namespace std;
class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    int left_bound = 0, right_bound = 0;
    // 查找左边界
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target) {
        right = mid - 1;
      } else if (nums[mid] > target) {
        right = mid - 1;
      } else if (nums[mid] < target) {
        left = mid + 1;
      }
    }
    if (left < 0 || left >= nums.size()) {
      left_bound = -1;
    } else {
      left_bound = nums[left] == target ? left : -1;
    }

    // 查找右边界
    left = 0, right = nums.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target) {
        left = mid + 1;
      } else if (nums[mid] > target) {
        right = mid - 1;
      } else if (nums[mid] < target) {
        left = mid + 1;
      }
    }
    if (right < 0 || right >= nums.size()) {
      right_bound = -1;
    } else {
      right_bound = nums[right] == target ? right : -1;
    }

    return {left_bound, right_bound};
  }
};
// @lc code=end
