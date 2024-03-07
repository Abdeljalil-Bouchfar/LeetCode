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
    ListNode* reversePart(ListNode* head, int length) {
        if (!head || !length) return head;
        ListNode* pre = head;
        ListNode* tmp = NULL;
        head = head->next;
        pre->next = NULL;
        while (head && length--)
        {
            tmp = head->next;
            head->next = pre;
            pre = head;
            head = tmp;
        }
        tmp = pre;
        while(tmp->next)
            tmp = tmp->next;
        
        tmp->next = head;
        return pre;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* tmp = head;

        ListNode* pre;
        ListNode* st;
        ListNode* en;
        int i = 1;
        while(tmp)
        {
            if (++i >= left && tmp->next)
            {
                if (i == left)
                    tmp->next = reversePart(tmp->next, right - left);
                else
                    head = reversePart(tmp, right - left);
                break;
            }

            tmp = tmp->next;
        }
        return head;
    }
};