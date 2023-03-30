class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i  = 0 ;
return buildTree(preorder , i , INT_MAX);
    }
    TreeNode *buildTree(vector<int> & preorder , int & i , int bound)
    {
        if(preorder.size()== i or preorder[i]> bound)
            return NULL ;
        TreeNode * root = new TreeNode(preorder[i++]);
        root->left = buildTree(preorder , i , root->val);
        root->right = buildTree(preorder , i , bound);
        return root;
    }
};