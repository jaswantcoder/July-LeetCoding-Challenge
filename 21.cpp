class Solution {
public:
    
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int n,m;
    bool valid(int i,int j)
    {
        if(i>=0 && i<n && j>=0 &&  j<m)
            return true;
        else return false;
    }
    
    bool find_(vector<vector<char>> & board,string s, int i, int j, vector<vector<bool>> vis)
    {
        int k;
        if(s.size()==0)
            return true;
        for(k=0;k<4;k++)
        {
            int x=i+dir[k][0];
            int y=j+dir[k][1];
            if(valid(x,y) && !vis[x][y] && s[0]==board[x][y])
                {
                vis[x][y]=true;
                if(find_(board,s.substr(1),x,y,vis))
                return true;
                vis[x][y]=false;
            }
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int i,j;
        n=board.size();
        m=board[0].size();
      if(word.size()==0)
          return true;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            
            if(board[i][j]==word[0])
            {
                vis[i][j]=true;
                if( find_(board, word.substr(1),i,j,vis)) 
                return true;
                vis[i][j]=false;
            }
            }
        }
        return false;
        
    }
};
