/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* root, int target, vector<TreeNode*> &path)
    {
        if (!root) return false;

        path.push_back(root);

        if (path.back()->val == target) return true;

        if (dfs(root->left, target, path) || dfs(root->right, target, path))
            return true;

        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p_path, q_path;
        dfs(root, p->val, p_path);
        dfs(root, q->val, q_path);
        
        TreeNode* ans;
        for (int i = 0; i < p_path.size() && i < q_path.size(); i++)
            if (p_path[i]->val == q_path[i]->val)
                ans = p_path[i];

        return ans;
    }
};