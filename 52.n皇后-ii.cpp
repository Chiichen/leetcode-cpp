/*
 * @lc app=leetcode.cn id=52 lang=cpp
 *
 * [52] N皇后 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
    
private:
    vector<vector<string>> result;
    bool isvalid(int x, int y, vector<string> &vec)
    {
        for (int xx = x - 1; xx <= x - 1 && xx >= 0; xx--)
        {
            if (vec[xx][y] == 'Q')
                return false;
        }
        for (int xx = x - 1, yy = y - 1; xx >= 0 && yy >= 0 && xx < vec.size() && yy < vec.size(); xx--, yy--)
        {
            if (vec[xx][yy] == 'Q')
                return false;
        }
        for (int xx = x - 1, yy = y + 1; xx >= 0 && yy >= 0 && xx < vec.size() && yy < vec.size(); xx--, yy++)
        {
            if (vec[xx][yy] == 'Q')
                return false;
        }
        return true;
    }

    void trackback(int x, vector<string> &vec)
    {
        if (x == vec.size())
            result.push_back(vec);
        for (int i = 0; i < vec.size(); i++)
        {
            if (isvalid(x, i, vec))
            {
                vec[x][i] = 'Q';
                trackback(x + 1, vec);
                vec[x][i] = '.';
            }
        }
    }
public:
    int totalNQueens(int n) {
        result.clear();
        vector<string> tempvec(n, string(n, '.'));
        trackback(0, tempvec);
        return result.size();
    }
};
// @lc code=end

