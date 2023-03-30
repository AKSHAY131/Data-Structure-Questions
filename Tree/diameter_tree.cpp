class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0 ;
        height(root , diameter );
         return diameter ;
    }
    private :
    int height(TreeNode* root , int &diameter)
    {
        if(root==NULL)
            return 0 ;
        int l = height(root->left , diameter);
        int r = height(root->right , diameter) ;
        diameter = max(diameter , l+r) ;
        return 1 + max(l , r) ;
    }
};