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
        int ans = 0;
        queue<pair<TreeNode*, int>> qu;
        qu.push({root, 1});
        while (!qu.empty() && root)
        {
            pair<TreeNode*, int> pr = qu.front();
            qu.pop();
            if (pr.first->left)
                qu.push({pr.first->left, pr.second + 1});
            if (pr.first->right)
                qu.push({pr.first->right, pr.second + 1});
            ans = max(ans, pr.second);
        }
        return ans;
    }
};