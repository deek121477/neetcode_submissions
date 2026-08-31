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
    TreeNode* invertTree(TreeNode* root) {
        /*if(root==nullptr) return NULL;

         swap(root->left,root->right);

        TreeNode* lefti=invertTree(root->left);
        TreeNode* righti=invertTree(root->right);
       
         return root;*/

        if(!root) return {};

         queue<TreeNode*>q;
         q.push(root);

         while(!q.empty()){
            auto node=q.front();
            q.pop();

            swap(node->left,node->right);
            if(node->left!=NULL) 
            q.push(node->left);
            if(node->right!=NULL) 
            q.push(node->right);
         }
         return root;
    }
};
