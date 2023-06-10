class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0, e = numbers.size() - 1;
        while (numbers[s] + numbers[e] != target)
        {
           e -= (numbers[s] + numbers[e] > target);
           s += (numbers[s] + numbers[e] < target);
        }
        return {s + 1, e + 1};
    }
};