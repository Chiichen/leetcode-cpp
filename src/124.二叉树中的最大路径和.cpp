/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
 */

// @lc code=start
#include <algorithm>
#include <climits>
#ifdef LEETCODELOCAL
using namespace std;
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
  int max_value = INT_MIN;

public:
  int maxPathSum(TreeNode *root) {
    ImplMaxPathSum(root);
    return max_value;
  }
  int ImplMaxPathSum(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    auto left = ImplMaxPathSum(root->left);
    auto right = ImplMaxPathSum(root->right);
    auto line = root->val + max(max(0, left), max(0, right));
    auto subtree = max(0, left) + max(0, right) + root->val;
    max_value = max(max_value, max(line, subtree));
    return line;
  }
};
// @lc code=end
