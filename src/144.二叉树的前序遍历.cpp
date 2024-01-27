/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start

//Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        auto ans = vector<int>();
        Traverse(root, ans);
        return ans;
    }

    void Traverse(TreeNode* root, vector<int>& ans){
        if (root == null){
            return;
        }
        ans.push_back(root.val);
        Traverse(root.left,ans);
        Traverse(root.right,ans);
    }
};
// @lc code=end

