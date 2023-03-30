class Solution {
private : 
    vector<string> ans ;
    void solve (TreeNode *node , string s  )
    {
        if(node==NULL)
            return ;
        if(node->left==NULL and node->right==NULL)
        {
            s+=to_string(node->val);
            ans.push_back(s);
        }
        solve (node->left , s+to_string(node->val) + "->");
        solve (node->right , s+to_string(node->val) + "->");
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
       solve(root ,"");
       return ans ;
    }
};