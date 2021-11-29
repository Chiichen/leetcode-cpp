/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=0,end=n-1;
        while(first!=target&&end!=target)
        {
            if(nums[(first+end)/2]>=0) end=(first+end)/2;
            else if(nums[(first+end)/2]<0) first=(first+end)/2;
            
        }
    }
};
// @lc code=end

