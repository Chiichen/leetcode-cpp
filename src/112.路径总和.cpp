/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
class Solution {
private:
  int sum = 0;

public:
  bool hasPathSum(TreeNode *root, int targetSum) {
    if (root == nullptr) {
      return false;
    }
    sum += root->val;
    if (root->left == nullptr && root->right == nullptr) {
      sum -= root->val;
      return sum + root->val == targetSum;
    }
    auto left =
        root->left == nullptr ? false : hasPathSum(root->left, targetSum);
    auto right =
        root->right == nullptr ? false : hasPathSum(root->right, targetSum);
    sum -= root->val;
    return left || right;
  }
};
// @lc code=end
