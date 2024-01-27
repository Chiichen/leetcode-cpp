/*
 * @lc app=leetcode.cn id=1700 lang=cpp
 *
 * [1700] 无法吃午餐的学生数量
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        int count1 = count(students.begin(), students.end(), 1);
        int count0 = students.size() - count1;
        for (auto it = sandwiches.begin(); it <= sandwiches.end(); it++)
        {
            int counts1 = count(sandwiches.begin(), it, 1);
            int counts0 = it - sandwiches.begin() - counts1;
            int dif1 = count1 - counts1;
            int dif0 = count0 - counts0;
            if (dif1 < 0 || dif0 < 0)
                return sandwiches.size() - (it - sandwiches.begin() - 1);
        }
        return 0;
        less<int>
        // @lc code=end
    }


    
// @lc code=end

