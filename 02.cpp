/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


#define se second
#define fi first
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> v;
        if(!root) return v;
        queue<pair<int,TreeNode*>>q;
        q.push(mp(1,root));
        int level;
        pair<int,TreeNode*> r;
        
        while(!q.empty())
        {
            r=q.front();
            q.pop();
            level=r.fi;
            root=r.se;
            if(v.size()<level)
            {
               v.pb({});
            }
            v[level-1].pb(root->val);
            if(root->left)
            q.push(mp(level+1,root->left));
            if(root->right)
                q.push(mp(level+1,root->right));
        }
        reverse(all(v));
        return v;
        
        

    }
};
