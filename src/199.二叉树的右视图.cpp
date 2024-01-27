/*
 * @lc app=leetcode.cn id=199 lang=cpp
 *
 * [199] 二叉树的右视图
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
private:
  int depth = 0;

public:
  vector<int> rightSideView(TreeNode *root) {
    auto ans = vector<int>();
    Traverse(root, ans);
    return ans;
  }
  void Traverse(TreeNode *root, vector<int> &ans) {
    if (root == nullptr) {
      return;
    }
    if (ans.size() <= depth) {
      ans.push_back(root->val);
    }
    depth++;
    Traverse(root->right, ans);
    Traverse(root->left, ans);
    depth--;
  }
};
// @lc code=end
