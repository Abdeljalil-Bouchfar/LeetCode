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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};

        vector<int> res;
        queue<TreeNode*> qu;
        qu.push(root);

        while(!qu.empty())
        {
            int inSize = qu.size() - 1;
            for (int i = 0; i <= inSize; i++)
            {
                TreeNode* tmp = qu.front();
                qu.pop();

                if (i == inSize) res.push_back(tmp->val);
                if (tmp->left) qu.push(tmp->left);
                if (tmp->right) qu.push(tmp->right);
            }
        }
        return res;
    }
};