/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 */

// @lc code=start
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
using namespace std;
class Solution {
  vector<int> tmp;
  void randomized_quicksort(vector<int> &nums, int l, int r) {
    if (l >= r)
      return;
    // int pivot = nums[rand() % ((r - l + 1) + l)]; // 随机选一个作为我们的主元
    int pivot = nums[(l + r) / 2];
    int i = l - 1, j = r + 1;
    while (i < j) {
      do
        i++;
      while (nums[i] < pivot);
      do
        j--;
      while (nums[j] > pivot);
      if (i < j) {
        swap(nums[i], nums[j]);
      }
    }
    randomized_quicksort(nums, l, j);
    randomized_quicksort(nums, j + 1, r);
    return;
  }

  void mergeSort(vector<int> &nums, int l, int r) {
    if (l >= r) {
      return;
    }
    auto mid = (l + r) >> 1;
    mergeSort(nums, mid + 1, r);
    mergeSort(nums, l, mid);
    int i = l, j = mid + 1;
    int cnt = 0;
    while (i <= mid && j <= r) {
      if (nums[i] <= nums[j]) {
        tmp[cnt++] = nums[i++];
      } else {
        tmp[cnt++] = nums[j++];
      }
    }
    while (i <= mid) {
      tmp[cnt++] = nums[i++];
    }
    while (j <= r) {
      tmp[cnt++] = nums[j++];
    }
    for (int i = 0; i < r - l + 1; ++i) {
      nums[i + l] = tmp[i];
    }
  }

public:
  vector<int> sortArray(vector<int> &nums) {
    // srand((unsigned)time(NULL));
    // randomized_quicksort(nums, 0, (int)nums.size() - 1);
    tmp.resize(nums.size());
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
  }
};

// @lc code=end
