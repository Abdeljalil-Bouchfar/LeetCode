class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for(const int &n: s){
            if(!s.count(n - 1)){
                int tmp = 1; 
                while(s.count(n + tmp))
                    tmp++;
                ans = max(ans, tmp);
            } 
        }
        return ans;
    }
};