/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
using namespace std;
#include <vector>
class Solution {
private:
  vector<vector<int>> res = {};
  vector<int> track = {};
  int tracksum = 0;

public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    backTrack(candidates, 0, target);
    return res;
  }
  void backTrack(vector<int> &nums, int start, int target) {
    if (tracksum == target) {
      res.push_back(track);
      return;
    } else if (tracksum > target) {
      return;
    }
    for (int i = start; i < nums.size(); i++) {
      track.push_back(nums[i]);
      tracksum += nums[i];
      backTrack(nums, i, target);
      tracksum -= nums[i];
      track.pop_back();
    }
  }
};
// @lc code=end
