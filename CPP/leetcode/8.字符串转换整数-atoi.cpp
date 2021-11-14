/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int dec=1;
        string s2;
        auto it=s.begin();
        while(isspace(*it)) it++;
        while(ispunct(*it))
        {
            if(*it=='-') dec=0;
            it++;
        }
        while(*it=='0') it++;
        while(isdigit(*it)) s2.push_back(*it++);


    }
};
// @lc code=end

