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
#define mp make_pair
#define se second
#define fi first
#define pb push_back
#define all(v) v.begin(),v.end()
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        vector<vector<int>> ans;
        pair<TreeNode*,int> node;
        if(!root) return ans;
        q.push(mp(root,0));
        int flag=0;
        int last=1;
        while(!q.empty())
        {
            node=q.front();
            q.pop();
            if(last!=node.se)
            {
                last=node.se;
                ans.pb({});
            }
            ans.back().pb(node.fi->val);
            if(node.fi->left) q.push(mp(node.fi->left,node.se^1));
            if(node.fi->right) q.push(mp(node.fi->right,node.se ^1));
            
        }
        
        for(auto &it:ans)
         {  if(flag) reverse(all(it)); flag^=1;}
        return ans;
        
        
    }
};
