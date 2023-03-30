int find_ceil(TreeNode * root , int key )
{
    int ceil = INT_MIN ;
    while(root)
    {
    if(root->val ==key)
    {
        ceil = root->val ;
        return ceil ;
    }
    else if(root->val < key )
     root = root->right ;
    else
    {
      ceil = root->val ;
      root = root->left
    }
    }
    return ceil ;
}