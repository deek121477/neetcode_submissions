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

    bool dfs(TreeNode* node, int t,int s)
    {
        if(node==NULL)return false;
        if(node->left==NULL && node->right==NULL)
        {
            if(s+node->val==t)
            return true;
            else 
            return false;
        }

        // if(node->left!=NULL)
        return dfs(node->left,t,s+node->val) || dfs(node->right,t,s+node->val);
        // if(node->right!=NULL)
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
   
   return dfs(root, targetSum, 0);
    }
};