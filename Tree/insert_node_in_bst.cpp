TreeNode *insertIntoBST(TreeNode *root, int val)
{
     TreeNode *current = root, *node = new TreeNode(val);
     while (current)
     {
          if (current->val > val)
          {
               if (current->left)
               {
                    current = current->left;
               }
               else
               {
                    current->left = node;
                    break;
               }
          }
          else
          {
               if (current->right)
               {
                    current = current->right;
               }
               else
               {
                    current->right = node;
                    break;
               }
          }
     }
     return root ? root : node;
}
it takes n time complexity and 1 space complexity ;

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root==NULL) return new TreeNode(val);
        if(root->val> val) root->left = insertIntoBST(root->left,val);
        else root->right = insertIntoBST(root->right,val);
        return root;  
    }
};
recursive takes n time complexity and n space complexity 