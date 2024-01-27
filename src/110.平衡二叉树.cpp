/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
#include <algorithm>
#include <cstdlib>
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
public:
  bool isBalanced(TreeNode *root) {
    if (root == nullptr) {
      return true;
    }
    if (abs(height(root->left) - height(root->right)) > 1) {
      return false;
    }
    return isBalanced(root->left) && isBalanced(root->right);
  }
  int height(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    return max(root->left == nullptr ? 0 : height(root->left),
               root->right == nullptr ? 0 : height(root->right)) +
           1;
  }
};
// @lc code=end
