class Solution {
public:
    int n,m;
    bool valid(int x,int y)
    {
        if(x<0 || x>n-1 || y<0 || y>m-1)
            return false;
        return true;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
    int ans=0;
        int a[][2]={{-1,0},{1,0},{0,-1},{0,1}};
        int i,j;
        n=grid.size();m=grid[0].size();
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                   for(int k=0;k<4;k++)
                   {
                     //  cout<<" "<<i+a[k][0]<<" "<<j+a[k][1]<<endl;;
                       if(!valid(i+a[k][0],j+a[k][1]) || grid[i+a[k][0]][j+a[k][1]]==0)
                           ans++;
                   }
                }
            }
        return ans;
    }
};
