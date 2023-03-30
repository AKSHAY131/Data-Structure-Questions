int find_floor(TreeNode * root , int key )
{
    int floor = INT_MIN ;
    while(root)
    {
    if(root->val ==key)
    {
        floor = root->val ;
        return floor ;
    }
    else if(root->val > key )
     root = root->left ;
    else
    {
      floor = root->val ;
      root = root->right
    }
    }
    return floor;
}