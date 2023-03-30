class BSTIterator {
private : stack<TreeNode *> s ;
public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    int next() {
        TreeNode * node = s.top();
        s.pop();
        pushAll(node->right ) ;
        return node->val ;
    }
    
    bool hasNext() {
        return !s.empty();
    }
    void pushAll(TreeNode * root)
    {
        while(root!=NULL)
        {
        s.push(root);
        root = root->left ;
        }
        
        
    }
};