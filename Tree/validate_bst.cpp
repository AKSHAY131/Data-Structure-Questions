class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return check(root , LONG_MIN , LONG_MAX);
    
    }
    bool check(TreeNode* root , long min , long max)
    {
        if(root==NULL)
            return true ;
        if(root->val >= max or root->val <= min)
            return false ;
        return check (root->left , min , root->val ) and check(root->right , root->val , max);
    }
};