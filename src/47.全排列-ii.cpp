/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
#include <algorithm>
#include <vector>

using namespace std;
class Solution {
private:
  vector<int> track = {};
  vector<vector<int>> res = {};
  vector<bool> used = {};

public:
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    used.resize(nums.size());
    sort(nums.begin(), nums.end());
    trackback(nums);
    return res;
  }
  void trackback(vector<int> &nums) {
    if (track.size() == nums.size()) {
      res.push_back(track);
    }
    for (int i = 0; i < nums.size(); i++) {
      if (used[i]) {
        continue;
      }
      if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
        continue;
      }
      track.push_back(nums[i]);
      used[i] = true;
      trackback(nums);
      used[i] = false;
      track.pop_back();
    }
  }
};
// @lc code=end
