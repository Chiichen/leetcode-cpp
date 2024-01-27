/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层序遍历
 */

// @lc code=start

#include <deque>
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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    auto ans = vector<vector<int>>();
    auto temp = vector<deque<int>>();
    if (root == nullptr) {
      return ans;
    }
    temp.push_back(deque<int>());
    Traverse(root, temp);
    for (auto queue : temp) {
      auto line_vec = vector<int>();
      for (auto iter : queue) {
        line_vec.push_back(iter);
      }
      ans.push_back(line_vec);
    }
    return ans;
  }

  void Traverse(TreeNode *root, vector<deque<int>> &queue_ans) {
    if (root == nullptr) {
      return;
    };
    depth % 2 ? queue_ans[depth].push_front(root->val)
              : queue_ans[depth].push_back(root->val);
    depth++;
    if (queue_ans.size() <= depth &&
        (root->right != nullptr || root->left != nullptr)) {
      queue_ans.push_back(deque<int>());
    }
    Traverse(root->left, queue_ans);
    Traverse(root->right, queue_ans);
    depth--;
  }
};
// @lc code=end
