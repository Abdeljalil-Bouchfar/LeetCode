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
        int nbr[100000];
        int j = 0;
        while (tmp)
            nbr[j++] = tmp->val, tmp = tmp->next;

        int ans = 0;
        j--;
        for (int i = 0; i < j; i++, j--)
            ans = max(ans, nbr[i] + nbr[j]);
        
        return ans;
    }
};