class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              if(grid[i][j]==0) continue;
              for(int k=0;k<4;k++){
                int x=i+r[k];
                int y=j+c[k];
                if(x<0 || x>=n || y<0 || y>=m || grid[x][y]==0) ans++;
              }
            }
        }
        return ans;
    }
};