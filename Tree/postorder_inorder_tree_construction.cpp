class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        unordered_map<int, int> inmap ;
        for(int  i = 0 ; i < inorder.size() ; i++)
        {
            inmap[inorder[i] ] = i ;
        }
        TreeNode *root = ans(inorder , 0 , inorder.size()-1 , postorder, 0 , postorder.size()-1 , inmap);
        return root ;
    }
    TreeNode* ans(vector<int>& inorder, int instart , int inend ,vector<int>& postorder , int poststart, int postend, unordered_map<int , int> &inmap)
    {
        if(instart>inend or poststart >postend)
            return NULL;
        TreeNode *root= new TreeNode(postorder[postend]);
        int inroot = inmap[root->val] ;
        int nums_left = inroot - instart ;
        
        root->left = ans(inorder , instart , inroot-1 , postorder , poststart, poststart+nums_left-1 , inmap) ;
        root->right = ans(inorder , inroot + 1 , inend  , postorder , poststart+nums_left , postend-1 ,inmap); // postend - 1 important
        return root ;
    }
    
};