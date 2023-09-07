/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        queue<Node*> qu;
        vector<Node*> origins;
        vector<Node*> clones(101, nullptr);

        if (node)
            qu.push(node);

        Node* tmp = nullptr;
        while (!qu.empty())
        {
            tmp = qu.front();
            qu.pop();
            if (!clones[tmp->val])
            {
                origins.push_back(tmp);
                clones[tmp->val] = new Node(tmp->val);
            }
            for (auto &n : tmp->neighbors)
            {
                if (!clones[n->val])
                {
                    clones[n->val] = new Node(n->val);
                    qu.push(n);
                }
                clones[tmp->val]->neighbors.push_back(clones[n->val]);
            }
        }
        // for (auto &n : origins)
        // {
        //     for (auto &t : n->neighbors)
        //         clones[n->val]->neighbors.push_back(clones[t->val]);
        // }
        return clones[1];
    }
};