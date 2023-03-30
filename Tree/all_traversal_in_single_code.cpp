vector<int> preinpost(TreeNode*)
{
    vector<int> pre , in ,post ;
    stack <pair<TreeNode* , int>> s ;
    if(root==NULL)
    return ;
    s.push({root , 1} );

    while(!s.empty())
    {
        auto it = s.top() ;
        s.pop() ;
        if(it.second == 1) 
        {
            pre.push_back(it.first->val);
            it.second++;
            s.push_back(it) ;
            if(it.first->left!=NULL)
            s.push_back({it.first->left , 1 });
        }
        else if (it.second ==2)
        {
            in.push_back(it.first->val) ;
            it.second++;
            s.push_back(it) ;

            if(it.first->right!=NULL)
            s.push_back({it.first->right , 1}) ;

        }
        else
        {
            post.push_back(it.first->val) ;
        }

        
    }
 return pre , post , in ;
}