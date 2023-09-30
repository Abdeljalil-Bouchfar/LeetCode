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
    vector<int> preorderTraversal(TreeNode* root) {
       vector<int> ans;
       stack<TreeNode* > st;
       if (root) st.push(root);
       while (!st.empty())
       {
           TreeNode* n = st.top();
           st.pop();
           if (n->right) st.push(n->right);
           if (n->left) st.push(n->left);
           ans.push_back(n->val);
       } 
       return ans;
    }
};