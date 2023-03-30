striver graph

class Solution {
    private :
    bool ans(int node , vector<vector<int>>& graph , vector<int> &color)
    {
        queue<int> q;
        q.push(node) ;
        color[node] = 1 ;
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop() ;
            
            for(auto e : graph[curr])
            {
                if(color[e] == -1)
                {
                    q.push(e);
                    color[e] = 1 - color[curr];
                }
                else
                {
                    if(color[e] == color[curr])
                        return false ;
                }
            }
        }
        return true ;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
      int n = graph.size();
      
        vector<int> color(n, -1);
        
        for(int i = 0; i <n ; i++)
        {
            if(color[i] ==-1)
            {
                if(!ans(i , graph ,color))
                    return false ;
            }
        }
     return true ;   
    }
};