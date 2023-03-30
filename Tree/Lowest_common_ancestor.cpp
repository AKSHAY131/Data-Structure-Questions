class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root ==NULL or p==root or q==root)
            return root ;
        TreeNode *left = lowestCommonAncestor(root->left , p , q) ;
        TreeNode *right = lowestCommonAncestor(root->right, p , q) ;
        
        if(left==NULL)
            return right ;
        else if(right ==NULL)
            return left ;
        else
            return root ;
    }
};