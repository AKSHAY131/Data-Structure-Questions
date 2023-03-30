class Solution {
    private: 
    int solve(int m , int n , vector<vector<int>> &ans )
    {
        if(m == 0 and n ==0)
            return 1 ;
        if(m < 0 or n  <0 )
            return 0 ;
        if(ans[m][n]!=-1)
            return ans[m][n];
        
        int up = solve(m-1, n ,ans );
        int left = solve(m , n-1 , ans);
        
        return ans[m][n] = up + left ;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m , vector<int>(n , -1));
        return solve(m-1, n-1 , ans);
    }
};

class Solution {
    
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m , vector<int>(n , 0));
        
        for(int i = 0 ; i <n ; i++)
            ans[0][i] = 1 ;
        for(int j = 0 ; j <m ; j++)
            ans[j][0] = 1 ;
        
        for(int i = 1 ; i <m ; i++)
        {
            for(int j = 1 ; j < n ; j++)
            {
                int up = ans[i-1][j];
                int left = ans[i] [j-1];
                
                ans[i][j] = up + left ;
            }
        }
        return ans[m-1][n-1];
    }
};