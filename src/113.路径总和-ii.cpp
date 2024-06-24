/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
 */

// @lc code=start

#ifdef LEETCODELOCAL
// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
#endif
#include <vector>
using namespace std;
class Solution {
private:
  vector<vector<int>> res = {};
  vector<int> buf = {};

public:
  vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
    dfs(buf, root, 0, targetSum);
    return res;
  }
  void dfs(vector<int> buf, TreeNode *root, int curSum, int targetSum) {
    if (root == nullptr) {
      return;
    } else {
      buf.push_back(root->val);
      curSum += root->val;
      if (curSum == targetSum && root->left == nullptr &&
          root->right == nullptr) { // 要求是叶子节点，而不是任意路径
        res.push_back(buf);
      }
      dfs(buf, root->left, curSum, targetSum);
      dfs(buf, root->right, curSum, targetSum);
      buf.pop_back();
    }
  }
};
// @lc code=end
