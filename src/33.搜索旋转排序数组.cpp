/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
#include <map>
#include <vector>

using namespace std;
class Solution {
public:
  int search(vector<int> &nums, int target) {
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r) {
      int mid = (l + r) / 2;
      if (nums[mid] == target)
        return mid;
      // mid是在左段
      if (nums[0] <= nums[mid]) {
        // target 是在左段且在mid左边
        if (nums[0] <= target && nums[mid] > target)
          r = mid - 1;
        else
          l = mid + 1;
      } else {
        if (nums[n - 1] >= target && nums[mid] < target)
          l = mid + 1;
        else
          r = mid - 1;
      }
    }
    return -1;
  }
};
// @lc code=end
