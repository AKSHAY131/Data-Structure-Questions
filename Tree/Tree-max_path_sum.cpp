class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int path = INT_MIN ;
        max_path(root , path ) ;
        return path ;
    }
    
    int max_path(TreeNode* root , int &path)
    {
        if(root == NULL)
            return 0 ;
        int left_sum = max(0,max_path(root->left , path)) ;
        int right_sum =max(0, max_path(root->right , path)) ;
        
        path = max(path , root->val + left_sum +right_sum) ;
        return  root->val + max(left_sum , right_sum) ;
    }
};