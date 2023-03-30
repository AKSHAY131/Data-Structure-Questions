just need to return any one of the sequnece to complete the course if possible

class Solution {

public:
     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<int> ans ;   
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
            ans.push_back(curr);
            for(auto e : lis[curr])
            {
                degree[e]-- ;
                if(degree[e] ==0)
                {
                    q.push(e);
                }
            }
        }
        if(n==0)
        return ans;
         
         else
         ans.clear() ;
         return ans;
        
    }
}