 vector<int> postorder(TreeNode*)  using 2 stacks 
{
    vector<int> ans ;
    if(root==NULL)
     return ans ;

    stack<TreeNode*> s , s1 ; 
    s.push(root) ;
    while(!s.empty())
    {
      root = s.top();
      s.pop() ;
      s1.push(root) ;
      if(root->left!=NULL)
       s.push(root->left) ;
       if(root->right!=NULL)
       s.push(root->right) ;

    }
    while(!s1.empty())
    {
      ans.push_back(s1.top()->val) ;
      s1.pop() ;
    }
    return ans ;

}