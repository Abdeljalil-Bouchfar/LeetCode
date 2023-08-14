class Solution {
public:
    int ans = 0;
    int visited[50001] = {0};
    void dfs(vector<pair<vector<int>, vector<int>>> &graph, int city = 0)
    {
        visited[city] = 1;
        
        for (int &n : graph[city].first)
            if (!visited[n])
                ans++, dfs(graph, n);
        for (int &n : graph[city].second)
            dfs(graph, n);
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<pair<vector<int>, vector<int>>> graph(n); // index: node | {firsrt: to ,second: from}
        for (auto &v : connections)
            graph[v[0]].first.push_back(v[1]), graph[v[1]].second.push_back(v[0]);

        dfs(graph, 0);
        return ans;
    }
};