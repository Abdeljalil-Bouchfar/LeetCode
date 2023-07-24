class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int tmp = 2000;
        for (int i = 0; i < asteroids.size(); i++)
        {
            while (!ans.empty() && ans.back() > 0 && asteroids[i] < 0 && abs(ans.back()) <= abs(asteroids[i]))
            {
                tmp = ans.back(), ans.pop_back();
                if (abs(tmp) == abs(asteroids[i]))
                    break;
            }
            bool add = ans.empty() || (ans.back() < 0 && asteroids[i] > 0) || abs(ans.back()) <= abs(asteroids[i]) || ans.back() * asteroids[i] > 0;
            
            if (add && (abs(tmp) != abs(asteroids[i]) || tmp * asteroids[i] > 0 || asteroids[i] > 0))
                ans.push_back(asteroids[i]);
            tmp = 2000;
        }
        return ans;
    }
};