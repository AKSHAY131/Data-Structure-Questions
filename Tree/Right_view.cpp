class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans ;
        view(root , 0 , ans) ;
        return ans ;
    }
    void view (TreeNode *node , int level , vector<int> &ans)
    {
        if(node ==NULL)
            return ;
        if(ans.size()==level) 
            ans.push_back(node->val) ;
        if(node->right!=NULL)
            view(node->right , level+1 , ans);
        if(node->left!=NULL)
            view(node->left, level+1 ,ans) ;
            
    }
};