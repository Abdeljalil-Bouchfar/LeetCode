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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* tmp = head;
        int size = 0;
        while (tmp)
            tmp = tmp->next, size++;

        if (size == 1)
            return nullptr;

        tmp = head;
        for (int i = 1; i < size / 2; i++)
            tmp = tmp->next;
        
        tmp->next = tmp->next->next;
        return head;
    }
};