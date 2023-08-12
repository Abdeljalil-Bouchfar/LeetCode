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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> qu;

        if (root) qu.push(root);

        while(!qu.empty())
        {
            long long size = qu.size(), sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += qu.front()->val;
                if (qu.front()->left) qu.push(qu.front()->left);
                if (qu.front()->right) qu.push(qu.front()->right);
                qu.pop();
            }
            ans.push_back((double)sum / size);
        }
        return ans;
    }
};