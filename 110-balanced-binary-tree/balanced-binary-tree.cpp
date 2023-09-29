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
    int depth(TreeNode* n)
    {
        if (!n) return 0;
        int l = depth(n->left) + 1;
        int r = depth(n->right) + 1;
        if (abs(l-r) > 1 || l < 1 || r < 1)
            return -1;
        return max(l, r);
    }
    bool isBalanced(TreeNode* root) {
        return depth(root) >= 0;
    }
};