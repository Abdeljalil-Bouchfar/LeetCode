class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> rq, dq;
        int len = senate.size();
        for(int i = 0; i < len; i++)
            senate[i] == 'R' ? rq.push(i) : dq.push(i);
        while (!rq.empty() && !dq.empty())
        {
            rq.front() < dq.front() ? rq.push(len) : dq.push(len);
            rq.pop(), dq.pop(), len++;
        }
        return (rq.size() > dq.size() ? "Radiant" : "Dire");
    }
};