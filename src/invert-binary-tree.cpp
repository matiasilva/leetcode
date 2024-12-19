// https://leetcode.com/problems/invert-binary-tree/
// runtime: 0ms, beats 100%
// space: 12.58MB, beats 8%

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }

    void swap(TreeNode* node) {
        if (node == nullptr) return;
        swap(node->right);
        swap(node->left);
        TreeNode* tmp = node->right;
        node->right = node->left;
        node->left = tmp;
    }
};
