/*
 * @lc app=leetcode.cn id=105 lang=cpp
 *
 * [105] 从前序与中序遍历序列构造二叉树
 */

// @lc code=start
#include <unordered_map>
#include <vector>
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
  unordered_map<int, int> valToIndex = unordered_map<int, int>();

public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    if (preorder.empty() || inorder.empty() ||
        preorder.size() != inorder.size()) {
      return nullptr;
    }
    for (int i = 0; i < inorder.size(); i++) {
      valToIndex[inorder[i]] = i;
    }
    auto root =
        build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    return root;
  }
  TreeNode *build(vector<int> &preorder, int pre_begin, int pre_end,
                  vector<int> &inorder, int in_begin, int in_end) {
    if (pre_begin > pre_end) {
      return nullptr;
    }
    auto rootval = preorder[pre_begin];
    auto index = valToIndex[rootval];
    auto left_size = index - in_begin;
    auto root = new TreeNode(rootval);
    root->left = build(preorder, pre_begin + 1, pre_begin + left_size, inorder,
                       in_begin, index - 1);
    root->right = build(preorder, pre_begin + left_size + 1, pre_end, inorder,
                        index + 1, in_end);
    return root;
  }
};
// @lc code=end
