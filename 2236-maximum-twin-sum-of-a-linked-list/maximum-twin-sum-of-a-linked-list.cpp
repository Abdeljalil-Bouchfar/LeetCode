/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* tmp = head;
        vector<int> nbr;
        while (tmp)
            nbr.push_back(tmp->val), tmp = tmp->next;

        int ans = 0;
        for (int i = 0, j = nbr.size() -1; i < j; i++, j--)
            ans = max(ans, nbr[i] + nbr[j]);
        
        return ans;
    }
};