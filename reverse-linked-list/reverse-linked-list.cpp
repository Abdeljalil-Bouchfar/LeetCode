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
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp = head;
        vector<ListNode *> v;
        while(tmp)
        {
            v.push_back(tmp);
            tmp = tmp->next;
        }
        for (int i = v.size() - 1; i > 0; i--)
            v[i]->next = v[i - 1];
        if (!v.empty()) {
            v.front()->next = nullptr;
            return v.back();
        }
         return nullptr;
    }
};