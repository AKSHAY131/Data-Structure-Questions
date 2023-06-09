// striver dp series memoziation 
class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size() ;
        int n = grid[0].size() ;
        vector<vector<vector<int>>> dp(m , vector<vector<int>>(n , vector<int>(n , - 1)));
        return f(0, 0, n-1 , m , n,  grid , dp) ;
    }
    int f(int i , int j1 , int j2 , int m , int n , vector<vector<int>>&grid , vector<vector<vector<int>>> &dp)
    {
        if(j1 <0 || j2 <0 || j1 >=n || j2>= n )
            return -1e8 ;
        if(i == m-1)
        {
            if(j1==j2)
                return grid[i][j1] ;
            else
                return grid[i][j1] + grid[i][j2] ;
            
        }
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2] ;
        
         int maxi  = -1e8 ;
        
        for(int d =-1 ; d<=1 ; d++)
        {
            for(int k=-1 ; k<=1 ; k++)
            {
               
                int value = 0 ;
                if(j1 == j2)
                    value = grid[i][j1 ] ;
                else
                    value = grid[i][j1] + grid[i][j2] ;
                
                value += f(i+1 , j1+d , j2+k , m , n , grid , dp) ;
                
                maxi = max(value , maxi) ;
                
                
            }
        }
        dp[i][j1][j2] = maxi ;
        return dp[i][j1][j2] ;
        
    }
};