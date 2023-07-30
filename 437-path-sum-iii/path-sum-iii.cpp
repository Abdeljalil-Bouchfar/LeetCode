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
    int subSum(TreeNode* root, int targetSum, long long prefix)
    {
        if (root == nullptr)
            return 0;
        prefix += root->val;
        return (prefix == targetSum) + subSum(root->left, targetSum, prefix) + subSum(root->right, targetSum, prefix);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return 0;
        return subSum(root, targetSum, 0) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
    }
};