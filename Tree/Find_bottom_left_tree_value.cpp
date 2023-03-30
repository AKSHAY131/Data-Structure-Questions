class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int max_depth = 0 ;
        int val = root->val;
        tree(root , val , max_depth , 0);
        return val ;   
    }
    void tree(TreeNode *node , int &val , int &max_depth, int depth)
    {
        if(node==NULL)
            return ;
        tree(node->left , val , max_depth , depth+1);
        tree(node->right , val , max_depth , depth+1);
        
        if(max_depth < depth)
        {
            max_depth = depth ; 
            val = node->val ;
        }
        
    }
};