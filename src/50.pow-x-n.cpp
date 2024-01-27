/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void pow(double nextx, int n, double x, double &ans, double odd = 1)
    {
        cout<<nextx<<' '<<n<<' '<<odd<<endl;
        if(abs(abs(x)-1.00000)<0.000001)
        {
            if(n%2==0) ans = abs(x);
            else ans = x;
            return;
        }
        if(abs(x)<0.0000001)
        {
            ans = 0.0;
            cout<<x;
            return;
        }
        if(n==0) {
            ans = 1.0;
            return;
        }
        if(n==1) {
            ans = nextx * odd;
            return;
        }
        else if((n&1)==0) {
            nextx = nextx*nextx;
            n=n/2;
            x = nextx;
        }

        else  
        {
            n = n-1;
            x = nextx;
            odd = odd*nextx;
        }
        pow(nextx,n,x,ans,odd);
    }
    double myPow(double x, int n)
    {
        if(n<0){
            x=1.0/x;
            n=abs(n);
        }
        double ans;
        pow(x, n, x, ans);
        return ans;
    }
};
// @lc code=end
