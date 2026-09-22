class Solution {
public:

    int bfs(int row, int col, vector<vector<int>>& grid,
            vector<vector<int>>& visited)
    {
        queue<pair<int,int>> q;

        int m = grid.size();
        int n = grid[0].size();

        q.push({row, col});
        visited[row][col] = 1;

        int cell = 1;
        bool boundary = false;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty())
        {
            auto [r, c] = q.front();
            q.pop();

            if(r == 0 || r == m-1 || c == 0 || c == n-1)
            {
                boundary = true;
            }

            for(int i = 0; i < 4; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr >= 0 && nc >= 0 && nr < m && nc < n)
                {
                    if(grid[nr][nc] == 1 && visited[nr][nc] == 0)
                    {
                        visited[nr][nc] = 1;
                        q.push({nr, nc});
                        cell++;
                    }
                }
            }
        }

        if(boundary)
            return 0;

        return cell;
    }

    int numEnclaves(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited(m, vector<int>(n, 0));

        int total = 0;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1 && visited[i][j] == 0)
                {
                    total += bfs(i, j, grid, visited);
                }
            }
        }

        return total;
    }
};