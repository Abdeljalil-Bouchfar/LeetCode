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
    bool f = false;
    void solve(TreeNode* node, int sum, int &targetSum)
    {
        if (f) return;
        if (node)
        {
            if (node->left == nullptr && node->right == nullptr && sum + node->val == targetSum)
                f = true;
            solve(node->right, sum + node->val, targetSum);
            solve(node->left, sum + node->val, targetSum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root) solve(root, 0, targetSum);
        return f;
    }
};