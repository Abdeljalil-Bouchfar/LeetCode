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
        Node* clone = nullptr;
        queue<Node*> qu;
        if (node)
            qu.push(node);

        vector<Node*> origin;
        vector<Node*> clones(101, nullptr);
        int visited[101];
        while (!qu.empty())
        {
            Node* tmp = qu.front();
            qu.pop();
            if (!clones[tmp->val])
            {
                origin.push_back(tmp);
                clones[tmp->val] = new Node(tmp->val);
            }
            for (auto &n : tmp->neighbors)
            {
                if (!clones[n->val])
                    qu.push(n);
            }
        }
        //cout << origin.size() << endl;
        for (auto &n : origin)
        {
            for (auto &t : n->neighbors)
                clones[n->val]->neighbors.push_back(clones[t->val]);
        }
        return clones[1];
    }
};