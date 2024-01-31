/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
 */

// @lc code=start

// Definition for a binary tree node.
#ifdef LEETCODELOCAL
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
  int count = 0;
  int res = 0;

public:
  int kthSmallest(TreeNode *root, int k) {
    Traverse(root, k);
    return res;
  }
  void Traverse(TreeNode *root, int k) {
    if (root == nullptr) {
      return;
    }

    Traverse(root->left, k);
    count++;
    if (count == k) {
      res = root->val;
      return;
    }
    Traverse(root->right, k);
  }
};
// @lc code=end
