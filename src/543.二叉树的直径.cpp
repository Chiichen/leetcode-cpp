/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
 */

// @lc code=start
#include <algorithm>
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
  int max_value = 0;

public:
  int diameterOfBinaryTree(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    height(root);
    return max_value;
  }
  int height(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    max_value = max(max_value, left_height + right_height);
    return max(root->left == nullptr ? 0 : left_height,
               root->right == nullptr ? 0 : right_height) +
           1;
  }
};
// @lc code=end
