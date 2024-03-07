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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* tmp = head;
        while (tmp)
        {
            size++;
            tmp = tmp->next;
        }
        int i = 0;
        tmp = head;
        while (tmp)
        {
            i++;
            tmp = tmp->next;
            if (i == size/2)
                return tmp;
        }
        return head;
    }
};