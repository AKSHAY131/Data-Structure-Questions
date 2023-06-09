Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false ;
        if(root->val==targetSum and root->left ==NULL and root->right==NULL)
            return true ;
   return hasPathSum(root->left , targetSum-root->val) or hasPathSum(root->right, targetSum-root->val);
            
    }
};