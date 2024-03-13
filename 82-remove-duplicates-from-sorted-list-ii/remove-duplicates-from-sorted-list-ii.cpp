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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        ListNode* prev = NULL;

        while (tmp && tmp->next)
        {
            if (tmp->val == tmp->next->val)
            {
                int val = tmp->val;
                while (tmp && tmp->val == val)
                    tmp = tmp->next;
                    
                if (prev)
                    prev->next = tmp;
                else
                    head = tmp, prev = NULL;
            }
            else
            {
                prev = tmp;
                tmp = tmp->next;
            }
        }
        return head;
    }
};