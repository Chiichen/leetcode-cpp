/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
private:
  vector<vector<int>> res = {};
  vector<int> track = {};

public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    backTrack(nums, 0);
    return res;
  }
  void backTrack(vector<int> &nums, int start) {
    res.push_back(track);
    for (int i = start; i < nums.size(); i++) {
      if (i > start && nums[i] == nums[i - 1]) {
        continue;
      }
      track.push_back(nums[i]);
      backTrack(nums, i + 1);
      track.pop_back();
    }
  }
};
// @lc code=end
