/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start

#ifdef LEETCODELOCAL
// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
#endif

class Solution {
public:
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    // Recursion
    //  if (root == nullptr || root == q || root == p ||
    //      root->val > p->val && root->val < q->val ||
    //      root->val > q->val && root->val < p->val) {
    //    return root;
    //  }
    //  auto left = lowestCommonAncestor(root->left, p, q);
    //  auto right = lowestCommonAncestor(root->right, p, q);
    //  if (left == nullptr) {
    //    return right;
    //  } else if (right == nullptr) {
    //    return left;
    //  }
    //  return root;

    // Traverse
    auto cur = root;
    while (1) {
      if (cur->val > p->val && cur->val > q->val) {
        cur = cur->left;
      } else if (cur->val < p->val && cur->val < q->val) {
        cur = cur->right;
      } else {
        break;
      }
    }
    return cur;
  }
};
// @lc code=end
