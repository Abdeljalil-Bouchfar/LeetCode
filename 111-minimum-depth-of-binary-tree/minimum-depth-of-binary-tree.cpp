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
        queue<TreeNode*> qu;
        if (root) qu.push(root);
        while (!qu.empty())
        {
            ans++;
            int n = qu.size();
            while (n--)
            {
                TreeNode* tmp = qu.front();
                qu.pop();
                if (!tmp->left && !tmp->right) return ans;
                if (tmp->left) qu.push(tmp->left);
                if (tmp->right) qu.push(tmp->right);
            }
        }
        return ans;
    }
};