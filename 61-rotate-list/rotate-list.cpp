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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next)
            return head;

        int size = 1;
        ListNode* tmp = head;
        while (tmp->next)
            tmp = tmp->next, ++size;

        tmp->next = head, tmp = head;

        size = size - (k % size) - 1;
        while (size--)
            tmp = tmp->next;
        
        head = tmp->next;
        tmp->next = NULL;
        return head;
    }
};