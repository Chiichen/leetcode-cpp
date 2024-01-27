/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 排列序列
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution
{
private:
    vector<char> vecch;
    string ans;
public:
    int fact(int n)
    {
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans *= i;
        }
        return ans;
    }
    string getPermutation(int n, int k)
    {
        string tempans;
        for(int i = 1;i<=n;i++)
        {
            vecch.push_back(char(i+'0'));
        }
        backtrack(1,n,n,k,tempans,vecch);
        return ans;
    }
    void backtrack(int index, int n,int n2, int k, string& tempans,vector<char>vec)
    {
        if(index==n+1&&k==1) {
            ans = tempans;
            return;
        }
        else if(index==n+1&&k!=1)
        {
            return;
        }
        else if(k<1)
        {
            return;
        }
        else
        {
            for (int i = 0; i < n2; i++)
            {
                if(k-(i+1)*fact(n-index)>1) continue;
                tempans.push_back(vec[i]);
                char a = vec[i];
                vec.erase(vec.begin()+i);
                backtrack(index+1,n,n2-1,k-((i)*fact(n-index)),tempans,vec);
                tempans.pop_back();
                vec.insert(vec.begin()+i,a);

            }
        }

    }

};
// @lc code=end
