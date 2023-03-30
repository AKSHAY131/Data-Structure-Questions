bfs topological sorting method 

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n =  numCourses ;
        vector<vector<int>> lis(n , vector<int>());
        vector<int> degree(n,0);
        queue<int> q ;
        
        for(auto &e : prerequisites)
        {
            lis[e[1]].push_back(e[0]);
            degree[e[0]]++;
        }
        
        for(int  i =0 ; i <n ; i++)
        {
            if(degree[i] ==0)
            q.push(i);
        }
        while(!q.empty())
        {
            int curr = q.front() ;
            q.pop() ;
            n-- ;
            for(auto e : lis[curr])
            {
                degree[e]-- ;
                if(degree[e] ==0)
                    q.push(e);
            }
        }
        return n==0 ;
        
    }
};