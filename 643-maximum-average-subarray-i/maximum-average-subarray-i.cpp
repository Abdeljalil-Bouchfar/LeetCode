class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int pre[nums.size()];
        pre[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
            pre[i] = pre[i - 1] + nums[i];
        
        double avg = pre[k - 1] != 0 ?  (double)pre[k - 1] / k : 0;
        for (int i = k; i < nums.size(); i++)
            if (avg < (double)(pre[i] - pre[i - k]) / k) avg = (double)(pre[i] - pre[i - k]) / k;

        return avg;
    }
};