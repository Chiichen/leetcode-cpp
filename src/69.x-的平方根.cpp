/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
#include <iostream>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        if (x == 1)
            return 1;
        int lp = 1;
        int rp = x / 2;
        int mid;
        while (lp <= rp)
        {
            mid = lp - (lp - rp) / 2;
            if (lp < 46341 && lp * lp == x)
                return lp;
            else if (rp < 46341 && rp * rp == x)
                return rp;
            else if (mid < 46341 && mid * mid == x)
                return mid;
            else
            {
                if (mid>46341||mid * mid > x)
                    rp = mid;
                else
                    lp = mid;
            }
            cout << "rp:" << ' ' << rp << "lp:" << ' ' << lp << "mid:" << ' ' << mid << endl;
            // return rp;
        }
        return rp;
    }
};
// @lc code=end
