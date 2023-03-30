class Solution {
private :
    Node* levelorder(Node *node)
    {
        queue<Node*> q ;
        q.push(node) ;
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0 ; i < size ; i++)
            {
              auto it = q.front();
              q.pop();
              
              if(i == size-1)
              it->next =NULL;
                
              else
                  it->next = q.front();
                
              if(it->left)
                  q.push(it->left);
              if(it->right)
                  q.push(it->right);
            }
        }
        return node ;
    }
public:
    Node* connect(Node* root) {
       if(root ==NULL)
           return NULL ;
        
        return levelorder(root);
    }
};