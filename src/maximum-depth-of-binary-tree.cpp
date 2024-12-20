// https://leetcode.com/problems/maximum-depth-of-binary-tree
// runtime: beats 100%, 0ms
// space: 5.02% (recursion)

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
    int maxDepth(TreeNode* root) {
        return findDepth(root);
    }

    int findDepth(TreeNode* node) {
        if (node == nullptr) return 0;
        return 1 + std::max(findDepth(node->left), findDepth(node->right));
    }
};
