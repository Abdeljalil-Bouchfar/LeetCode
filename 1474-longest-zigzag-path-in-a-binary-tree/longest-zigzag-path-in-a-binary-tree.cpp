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
    int count = 0;
    void dfs(TreeNode* root, int lf, int rh)
    {
        if(!root) return;
        count = max(lf, max(rh, count));
        dfs(root->left, 0, lf + 1);
        dfs(root->right, rh + 1, 0);
    }
    int longestZigZag(TreeNode* root) {
        dfs(root, 0, 0);
        return count;
    }
};