/*
 * @lc app=leetcode.cn id=714 lang=cpp
 *
 * [714] 买卖股票的最佳时机含手续费
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        if(n==1) return 0;
        vector<vector<int>>dp(n,vector<int>(2,0));
        dp[0][1]=-prices[0]-fee;
        for (int i = 1; i < n; i++)
        {
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]);
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]-prices[i]-fee);
        }
        return max(dp[n-1][0],dp[n-1][1]);
        
    }
};
// @lc code=end

