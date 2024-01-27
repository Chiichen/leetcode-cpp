/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    auto ans = vector<vector<int>>();
    if (root == nullptr) {
      return ans;
    }
    ans.push_back(vector<int>());
    Traverse(root, ans);

    return ans;
  }

  void Traverse(TreeNode *root, vector<vector<int>> &ans) {
    if (root == nullptr) {
      return;
    };
    ans[depth].push_back(root->val);
    depth++;
    if (ans.size() <= depth &&
        (root->right != nullptr || root->left != nullptr)) {
      ans.push_back(vector<int>());
    }
    Traverse(root->left, ans);
    Traverse(root->right, ans);
    depth--;
  }
};
// @lc code=end
