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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0);
        ListNode *tmp = res;
        int carry = 0;
        // while loop will run, until l1 and l2 both null and our carry has no value in it. 
        while (l1 != NULL || l2 != NULL || carry == 1){
            int sum = 0;
            if(l1 != NULL) 
                sum += l1->val, l1 = l1->next;
            if(l2 != NULL) 
                sum += l2->val, l2 = l2->next;
            sum += carry; // if we have carry then add it into our sum
            carry = sum / 10; // if we get carry, then divide it by 10 to get the carry
            ListNode *node = new ListNode(sum % 10); // the value we'll get by moduloing it, will become as new node so. add it to our list
            tmp->next = node; // tmp will point to that new node if we get
            tmp = tmp->next;  // update the current every time
        }
        return res->next; // return next node bcz, we don't want the initial node that has 0 on it.
    }
};