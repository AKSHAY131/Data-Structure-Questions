class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int , vector<int>> graph ;
        
        for(auto e : edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        
        queue<int> q ;
        vector<bool> vis(n, false);
        q.push(source);
        vis[source]=1 ;
        
        while(!q.empty())
        {
            int curr = q.front() ;
            q.pop() ;
            
            if(curr == destination)
                return true ;
            
            for(auto &node: graph[curr])
            {
                if(!vis[node])
                {
                    vis[node] =1 ;
                    q.push(node);
                }
            }
        }
        return false ;
    }
};

// dfs
class Solution {
    private : void dfs(int start ,unordered_map<int , vector<int>> &graph ,vector<bool> &vis )
    {
        vis[start] = 1 ;
        
        for(auto &node : graph[start])
        {
            if(!vis[node])
                dfs(node , graph , vis);
        }
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int , vector<int>> graph ;
        
        for(auto e : edges)
        {
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        
        
        vector<bool> vis(n, false);
        
       
        dfs(source, graph , vis) ;
        
        if(vis[destination])
            return true ;
        
        else
            return false ;
       
    }
};

// same concept for directed bas ek hi edge input denge hum only graph[e[0]].push_back(e[1]);
