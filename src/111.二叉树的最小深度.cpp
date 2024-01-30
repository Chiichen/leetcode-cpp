/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start

// Definition for a binary tree node.
#include <queue>
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
using namespace std;
class Solution {
public:
  int minDepth(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    queue<TreeNode *> q;
    q.push(root);
    int step = 1;
    while (!q.empty()) {
      int qsize = q.size();
      for (int i = 0; i < qsize; i++) {
        TreeNode *cur = q.front();
        q.pop();
        if (cur->left == nullptr && cur->right == nullptr) {
          return step;
        }
        if (cur->left != nullptr) {
          q.push(cur->left);
        }
        if (cur->right != nullptr) {
          q.push(cur->right);
        }
      }
      step++;
    }
    return step;
  }
};
// @lc code=end
