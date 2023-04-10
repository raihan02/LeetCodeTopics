class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
          int cnt = 0;

        int m = grid.size();
        int n = grid[0].size();
        int max = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    dfs(i,j,m,n,grid);
                    if(max < this->count){
                        max = this->count;
                    }
                    this->count = 0;
                }
            }
        }

        return max;
    }
private:
   int count = 0; 
   void dfs(int i, int j, int r, int c, vector<vector<int>>&grid){
       if(i < 0 || i >= r || j < 0 || j >= c || grid[i][j] == 0 ){
           return;
       }
       count++;
       grid[i][j] = 0;
        dfs(i - 1, j, r, c,grid);
        dfs( i + 1, j, r, c,grid);
        dfs( i, j - 1, r, c,grid);
        dfs(i, j + 1, r, c,grid);
   }

};
