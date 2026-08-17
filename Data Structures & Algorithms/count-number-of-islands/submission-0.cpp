class Solution {
    private:
    void dfs(vector<vector<char>>&grid,vector<vector<bool>>&vis,int row,int col){
           int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=true;
        int r[]={-1,0,0,1};
        int c[]={0,1,-1,0};
        for(int k=0;k<4;k++){
            int nr=row+r[k];
            int nc=col+c[k];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]=='1'){
                dfs(grid,vis,nr,nc);
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    dfs(grid,vis,i,j);
                }
            }
        }
        return cnt;
    }
};
