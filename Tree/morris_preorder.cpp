vector<int> getPeorder(TreeNode *root)
{
    TreeNode* curr = root ;
    vector<int> preorder;
    while(curr!=NULL)
    {
        if(curr->left==NULL)
        {
            preorder.push_back(curr->val) ;
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
             preorder.push_back(curr->val);
             curr = curr->left ;
         }
         else
         {
             prev->right =NULL;            // breaking the link
             curr = curr->right;            // now you can go right 
         }

        }   
    }
    return preorder; 
}