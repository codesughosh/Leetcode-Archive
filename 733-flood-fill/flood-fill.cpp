class Solution {
public:
    void bfs(int row, int col, vector<vector<int>>& image, vector<vector<int>>& visited, int color, int val)
    {
        int m = image.size();
        int n = image[0].size();

        queue<pair<int,int>> q;
        q.push({row,col});

        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,-1,1};

        while(!q.empty())
        {
            auto [r,c] = q.front();
            q.pop();

            for(int i=0; i<4; i++)
            {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr >= 0 && nc >=0 && nr < m && nc < n)
                {
                    if(image[nr][nc] == val && visited[nr][nc] == 0)
                    {
                        visited[nr][nc]=1;
                        image[nr][nc]=color;
                        q.push({nr,nc});
                    }
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> visited(m , vector<int>(n,0));
        int val = image[sr][sc];
        image[sr][sc] = color;
        bfs(sr, sc, image, visited, color, val);
        return image;
    }
};