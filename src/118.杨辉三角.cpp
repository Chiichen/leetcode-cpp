/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        if(n==1)    return{{1}};
        temp.push_back(1),ans.push_back(temp);
        temp.clear(),temp.push_back(1),temp.push_back(1),ans.push_back(temp);
        temp.clear();
        for (int i = 2; i < n; i++)
        {
            temp.clear();
            temp.push_back(1);
            for (int j = 1; j < i; j++)
            {
               temp.push_back(ans[i-1][j-1]+ans[i-1][j]);  
            }
            temp.push_back(1);
            ans.push_back(temp);
            
        }
        return ans;
        

    }
};
// @lc code=end

