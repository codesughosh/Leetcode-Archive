class Solution {
public:
    int bfs(queue<pair<int,int>>& q, vector<vector<int>>& grid, int fresh)
    {
        int minute=0;
        int m = grid.size();
        int n = grid[0].size();
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        while(!q.empty() && fresh > 0)
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

                    if(nr >=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]==1)
                        {
                            grid[nr][nc] = 2;
                            fresh--;

                            q.push({nr,nc});
                        }
                }
            }
            minute++;
        }
    if(fresh > 0)
        {
            return -1;
        }
    return minute;
    }
        
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int total=0;
        int fresh=0;
        queue<pair<int,int>> q;

        for(int i=0; i < m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }
        return bfs(q, grid, fresh);
    }
};