class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans ;
        if(root == NULL )
        return ans ;
        queue<pair<Node* , int>> q ;
        map<int , int> m ;
        q.push({root , 0});
        while(!q.empty())
        {
            auto p = q.front() ;
            q.pop() ;
            int line = p.second ;
            Node *node =  p.first ;
            m[line] = node->data ; 
            if(node->left!=NULL)
            q.push({node->left , line-1});
            if(node->right!=NULL)
            q.push({node->right, line+1});
            
        }
        for(auto it : m )
        ans.push_back(it.second) ;
        return ans ;
        
    }
};