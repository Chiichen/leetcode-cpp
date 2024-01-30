/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
private:
  vector<vector<int>> res = {};

public:
  vector<vector<int>> permute(vector<int> &nums) {
    int level = 0;
    int n = nums.size();
    vector<bool> used = {};
    used.resize(n);
    vector<int> track = {};
    trackback(nums, used, track);
    return res;
  }
  void trackback(vector<int> &nums, vector<bool> &used, vector<int> &track) {
    if (track.size() == nums.size()) {
      res.push_back(track);
      return;
    }
    for (int i = 0; i < nums.size(); i++) {
      if (used[i]) {
        continue;
      }
      track.push_back(nums[i]);
      used[i] = true;
      trackback(nums, used, track);
      track.pop_back();
      used[i] = false;
    }
  }
};
// @lc code=end
