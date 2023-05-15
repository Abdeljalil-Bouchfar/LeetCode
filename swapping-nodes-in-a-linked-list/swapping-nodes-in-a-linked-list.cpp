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
    ListNode* swapNodes(ListNode* head, int k) {
        int i = 1;
        ListNode* tmp = head;
        ListNode* fr;
        ListNode* sc;
        while(tmp)
        {
            if (k == i)
                fr = tmp;
            tmp = tmp->next;
            i++;
        }
        tmp = head;
        while(--i)
        {
            if (k == i)
                sc = tmp;
            tmp = tmp->next;
        }
        swap(fr->val, sc->val);
        return head;
    }
};