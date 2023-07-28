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
    void dfs(TreeNode* root, vector<int> &lfs)
    {
        if (!root) return;
        if (!root->right && !root->left)
            lfs.push_back(root->val);
        dfs(root->right, lfs);
        dfs(root->left, lfs);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> lf1, lf2;
        dfs(root1, lf1);
        dfs(root2, lf2);
        return lf1 == lf2;
    }
};