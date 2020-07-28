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

class Solution {
public:
    TreeNode *build(vector<int> & inorder, int in_l,int in_r, vector<int> &postorder, int post_l,int post_r)
    {
        if(in_l>in_r || post_l>post_r) return NULL;
    
        TreeNode * root=new TreeNode;
        root->val=postorder[post_r];
        int i;
        for(i=in_l;i<=in_r;i++)
       if(inorder[i]==postorder[post_r])
           break;
        root->left=build(inorder,in_l,i-1,postorder,post_l,post_l+(i-in_l)-1);
        root->right=build(inorder,i+1,in_r,postorder,post_l+(i-in_l),post_r-1);
        return root;
    
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
  
    return build(inorder,0,inorder.size()-1,postorder, 0,postorder.size()-1);
    }
};
