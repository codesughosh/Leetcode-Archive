class Solution {
public:
    vector<vector<int>> bfs(vector<vector<int>>& visited, vector<vector<int>>& dist, queue<pair<int,int>>& q, vector<vector<int>>& mat)
    {
        int m = mat.size();
        int n = mat[0].size();
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};
        while(!q.empty())
        {
            int size = q.size();

            for(int k=0; k<size; k++)
            {
                auto [r,c] = q.front();
                q.pop();

                for(int i=0; i<4; i++)
                {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if(nr >=0 && nc >=0 && nr<m && nc<n)
                    {
                        if(visited[nr][nc]==0)
                        {
                            visited[nr][nc]=1;
                            dist[nr][nc] = dist[r][c]+1;
                            q.push({nr, nc});
                        }
                    }
                }
            }
        }
        return dist;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> visited(m, vector<int>(n,0));
        vector<vector<int>> dist(m, vector<int>(n,0));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(mat[i][j]==0)
                {
                    visited[i][j]=1;
                    q.push({i,j});
                }
            }
        }
        return bfs(visited, dist, q, mat);
    }
};