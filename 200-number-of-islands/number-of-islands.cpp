class Solution {
public:

    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& visited)
    {
        queue<pair<int,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        q.push({row, col});
        visited[row][col]=1;

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        while(!q.empty())
        {
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i < 4; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr >= 0 && nc >= 0 && nr < m && nc < n)
                {
                    if(grid[nr][nc] == '1' && visited[nr][nc] == 0)
                    {
                        visited[nr][nc] = 1;
                        q.push({nr, nc});
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n,0));
        int islands=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == '1' && visited[i][j]==0)
                {
                    islands++;
                    bfs(i,j, grid, visited);
                }
            }
        }

        return islands;
    }
};