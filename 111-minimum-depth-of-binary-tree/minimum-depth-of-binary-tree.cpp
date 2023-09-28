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
    int minDepth(TreeNode* root) {
        int ans = 0;
        queue<pair<TreeNode*, int>> qu;
        if (root) qu.push({root, 1});
        while (!qu.empty())
        {
            pair<TreeNode*, int> p = qu.front();
            qu.pop();
            if (!p.first->left && !p.first->right)
            {
                ans = p.second;
                break;
            }
            if (p.first->left) qu.push({p.first->left, p.second + 1});
            if (p.first->right) qu.push({p.first->right, p.second + 1});
        }
        return ans;
    }
};