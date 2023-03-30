class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1 ;
    }
    int height(TreeNode*root)
    {
        if(root == NULL)
            return 0 ;
        int lh = height(root->left) ;
        if (lh==-1 )                calling function mein hi value return hoti hai , say lh se call hua now lh == -1 so , you have to compare 
            return -1 ;
        int rh = height(root->right); 
           if(rh==-1)               same logic for rh also 
           return -1 ;
        if(abs(lh - rh)>1)
            return -1 ;
        return 1+ max(lh, rh) ;
    }
};
