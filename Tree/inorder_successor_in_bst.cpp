class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
       if(root==NULL)
       return NULL;
       Node * successor = NULL ;
       while(root!=NULL)
       {
           if(root->data > x->data )
           {
               successor =  root ;
               root = root->left ;
           }
           else
           root= root->right ;
           
       }
       return successor ;
    }
};
