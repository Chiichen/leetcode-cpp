/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
#include <vector>
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

class Solution {
public:
  vector<int> inorderTraversal(TreeNode *root) {
    auto ans = vector<int>();
    Traverse(root, ans);
    return ans;
  }

  void Traverse(TreeNode *root, vector<int> &ans) {
    if (root == nullptr) {
      return;
    }

    Traverse(root->left, ans);
    ans.push_back(root->val);
    Traverse(root->right, ans);
  }
};
// @lc code=end
