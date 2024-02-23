/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> um;
        Node* tmp = head;
        while (tmp) {
            um[tmp] = new Node(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        while (tmp) {
            um[tmp]->next = um[tmp->next];
            um[tmp]->random = um[tmp->random];
            tmp = tmp->next;
        }
        return um[head];
    }
};