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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> qu;
        if (root)
            qu.push(root);
        int arr[201] = {0};
        TreeNode* tmp = nullptr;
        while (!qu.empty())
        {
            int n = qu.size(), i = 0;
            while (n--)
            {
                tmp = qu.front();
                qu.pop();
                arr[i++] = 200, arr[i++] = 200;
                if (tmp->left) qu.push(tmp->left), arr[i - 2] = tmp->left->val;
                if (tmp->right) qu.push(tmp->right), arr[i - 1] = tmp->right->val;
            }
            if (qu.size() % 2) return false;
            n = i - 1, i = 0;
            while (i < n)
            {
                if (arr[i++] != arr[n--])
                    return false;
            }
        }
        return true;
    }
};