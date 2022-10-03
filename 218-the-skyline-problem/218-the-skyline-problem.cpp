class Solution
{
public:
	vector<vector<int>> getSkyline(vector<vector<int>> &buildings)
	{
		vector<vector<int>> res;
		vector<vector<int>> walls;
		for (auto b : buildings)
		{
			// add buildings walls and mark left walls with -(buildings height)
			walls.push_back({b[0], -b[2]});
			walls.push_back({b[1], b[2]});
		}
		// Sort walls by xs order
		sort(walls.begin(), walls.end());
		// multiset for left Walls Heights acts like priority queue with top at end
        multiset<int> leftWallHeights = {0};
        int top = 0;                                       
        for (auto w : walls) {
			// left wall
            if (w[1] < 0) {                             
                leftWallHeights.insert(-w[1]);
            }
			// right wall
			else {                                        
                leftWallHeights.erase(leftWallHeights.find(w[1]));
            }
            // if top != current wall add skyline to rsult
            if (*leftWallHeights.rbegin() != top) {         
                res.push_back({w[0], top = *leftWallHeights.rbegin()});
            }
        }
		return res;
	}
};