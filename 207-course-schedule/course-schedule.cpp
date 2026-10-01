class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for (auto p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            for (int node : adj[i]) {
                indegree[node]++;
            }
        }

        queue<int> q;

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            topo.push_back(node);

            for (int neighbour : adj[node]) {

                indegree[neighbour]--;

                if (indegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }
        if (topo.size() == numCourses)
            return true;

        return false;
    }
};