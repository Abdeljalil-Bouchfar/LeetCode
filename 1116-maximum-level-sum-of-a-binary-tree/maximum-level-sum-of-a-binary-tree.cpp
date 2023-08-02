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
    int maxLevelSum(TreeNode* root) {
        if (!root) return 0;
        int max = INT_MIN, level = 0;
        queue<TreeNode*> qu;
        qu.push(root);

        int j = 1;
        while(!qu.empty())
        {
            int tmp = 0, levSize = qu.size();
            for (int i = 0; i < levSize; i++)
            {
                TreeNode* node = qu.front();
                tmp += node->val;
                qu.pop();
                
                if (node->left) qu.push(node->left);
                if (node->right) qu.push(node->right);
            }
            if (tmp > max)
                max = tmp, level = j;
            j++;
        }
        return level;
    }
};