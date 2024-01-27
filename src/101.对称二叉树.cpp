/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
public:
  bool isSymmetric(TreeNode *root) {
    if (root == nullptr) {
      return true;
    } else {
      return isSymmetric(root->left, root->right);
    }
  }

  bool isSymmetric(TreeNode *lroot, TreeNode *rroot) {
    if (lroot == nullptr && rroot == nullptr) {
      return true;

    } else if (lroot == nullptr || rroot == nullptr) {
      return false;

    } else {
      return lroot->val == rroot->val &&
             isSymmetric(lroot->left, rroot->right) &&
             isSymmetric(lroot->right, rroot->left);
    }
  }
};
// @lc code=end
