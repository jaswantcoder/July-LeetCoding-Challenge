
#define pb push_back
#define fi first
#define se second
#define mp make_pair

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        
        int i,j,start=0,end=n-1;
        vector<int> edge[n];
        for(i=0;i<n;i++)
        {
            for(auto j:graph[i])
            edge[i].pb(j);
        }
        vector<vector<int>> ans;
        queue<pair<int,vector<int>>> q;
        vector<int> vv;
        vv.pb(0);
    q.push(mp(0,vv));
        while(!q.empty())
        {
          pair<int,vector<int>>  vert=q.front();
            q.pop();
            for(auto j:edge[vert.fi])
            {
                
                vector<int> v=vert.se;
                v.pb(j);
                if(j==n-1)
                {
                    ans.pb(v);
                }
                else
                    q.push(mp(j,v));
            }
        }
        return ans;
        
        
    }
};
