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
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int> ans;
       stack<TreeNode* > st;
       if (root) st.push(root);
       while (!st.empty())
       {
            TreeNode* n = st.top();
            if (n == nullptr)
            {
                st.pop();
                ans.push_back(st.top()->val);
                st.pop();
            }
            else
            {
                st.push(nullptr);
                if (n->right) st.push(n->right);
                if (n->left) st.push(n->left);
            }
       }
       return ans;
    }
};