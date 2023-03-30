vector<int> getInorder(TreeNode *root)
{
    TreeNode* curr = root ;
    vector<int> inorder;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            inorder.push_back(curr->val) ;
            curr = curr->right ;
        }
        else
        {
         TreeNode * prev = curr->left;
         while(prev->right!= curr and prev->right!=NULL)
         {
             prev = prev->right
         }   
         if(prev->right ==NULL)
         {
             prev->right = curr ;  // creating the link and now do can go to left
             curr = curr->left ;
         }
         else
         {
             prev->right =NULL;            // breaking the link
             inorder.push_back(curr->val) ;
             curr = curr->right;            // now you can go right 
         }

        }   
    }
    return inorder; 
}