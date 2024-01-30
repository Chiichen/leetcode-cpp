/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
private:
  int tracksum = 0;
  vector<int> track = {};
  vector<vector<int>> res = {};

public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    backTrack(candidates, 0, target);
    return res;
  }
  void backTrack(vector<int> &nums, int start, int target) {
    if (tracksum == target) {
      res.push_back(track);
    }
    if (tracksum > target) {
      return;
    }
    for (int i = start; i < nums.size(); i++) {
      if (i > start && nums[i] == nums[i - 1]) {
        continue;
      }
      track.push_back(nums[i]);
      tracksum += nums[i];
      backTrack(nums, i + 1, target);
      tracksum -= nums[i];
      track.pop_back();
    }
  }
};
// @lc code=end
