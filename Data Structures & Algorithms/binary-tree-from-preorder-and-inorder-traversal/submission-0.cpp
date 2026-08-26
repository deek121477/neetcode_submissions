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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //preorder
       // left-root-right
        //inorder
       // root-left-right
int n=preorder.size();
int m=inorder.size();

  if(n==0 || m==0) return NULL;

  TreeNode* node=new TreeNode(0);
  TreeNode* curr=head;
  int i=0,j=0;
  while(i<n && j<n){
    curr->right=new TreeNode(preorder[i],nullptr,curr->right);
    curr=curr->right;
    i++;

    while(i<n && curr->val!=inorder[j])
    {
    curr->left=new TreeNode(preorder[i],nullptr,curr);
    curr=curr->left;
    i++;
    }
    
  }






    }
};
