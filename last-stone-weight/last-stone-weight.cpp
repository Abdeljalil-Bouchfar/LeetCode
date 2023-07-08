class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> qu;
        for (int &n : stones)
            qu.push(n);
        while (qu.size() > 1)
        {
            int v1 = qu.top(); qu.pop();
            int v2 = qu.top(); qu.pop();
            if (v1 != v2)
                qu.push(v1 - v2);
        }
        qu.push(0);
        return qu.top();
    }
};