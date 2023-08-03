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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = nullptr;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty())
        {
            if (qu.front()->val == val)
            {
                ans = qu.front();
                break;
            }

            if (qu.front()->left)
                qu.push(qu.front()->left);
            if (qu.front()->right)
                qu.push(qu.front()->right);
            
            qu.pop();
        }
        return ans;
    }
};