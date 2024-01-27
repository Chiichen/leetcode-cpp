/*
 * @lc app=leetcode.cn id=307 lang=cpp
 *
 * [307] 区域和检索 - 数组可修改
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class NumArray
{

private:
    vector<int> tree;
    vector<int> lazy;
    vector<int> arr;

public:
    void build(int s, int t, int p)
    {
        if (s == t)
            tree[p] = arr[s];
        else if ()
    }
    NumArray(vector<int> &nums)
    {
        arr = nums;
    }

    void update(int index, int val)
    {
    }

    int sumRange(int left, int right)
    {
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
// @lc code=end
