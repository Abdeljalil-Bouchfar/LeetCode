class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gasSum = 0, costSum = 0, start = 0, tank = 0;
        for (int i = 0; i < cost.size(); i++)
        {
            gasSum += gas[i], costSum += cost[i];
            tank += gas[i] - cost[i];
            if (tank < 0) tank = 0, start = i + 1;
        }
        return gasSum < costSum ? -1 : start;
    }
};