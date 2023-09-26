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
    TreeNode* solve(int s, int e, vector<int>& nums)
    {
        if (s >= e) return nullptr;
        int mid = (e + s) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = solve(s, mid, nums);
        root->right = solve(mid + 1, e, nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve (0, nums.size(), nums);
    }
};