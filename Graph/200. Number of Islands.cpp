class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;

        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    dfs(i,j,m,n,grid);
                    cnt++;
                }
            }
        }

        return cnt;
    }

private:
   void dfs(int i, int j, int r, int c, vector<vector<char>>&grid){
       if(i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == '0' ){
           return;
       }
       grid[i][j] = '0';
        dfs(i - 1, j, r, c,grid);
        dfs( i + 1, j, r, c,grid);
        dfs( i, j - 1, r, c,grid);
        dfs(i, j + 1, r, c,grid);
   }
};
