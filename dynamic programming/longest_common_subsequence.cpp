// memoziation best practice is to use n+1 , m+1 method as for dp[1][0] if not match it would take max of dp[1][-1] and another  but -1 dont exist
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size() ;
        int m = text2.size() ;
        
        vector<vector<int>> dp(n , vector<int>(m , -1)) ;
        return f(n-1 , m-1 , text1 , text2 , dp) ;
        
    }
    int f (int i , int j , string &text1 , string &text2 ,vector<vector<int>> &dp) 
    {
        if(i < 0 or j <0 )
            return 0 ;
        
        if(dp[i][j] !=-1)
            return dp[i] [j ] ;
        
        if(text1[i] == text2[j])
        return dp[i][j] = 1 + f(i-1 , j-1 , text1  , text2 , dp) ;
        
        return dp[i][j] = 0 + max(f(i-1 , j , text1 , text2 , dp) , f(i , j-1 , text1 ,text2, dp));
    }
 // another memoization 
};
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size() ;
        int m = text2.size() ;
        
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , -1)) ;
        return f(n , m , text1 , text2 , dp);
        
        
    }
    int f (int i , int j , string &text1 , string &text2 ,vector<vector<int>> &dp) 
    {
        if(i == 0 or j == 0 )
            return 0 ;
        
        if(dp[i][j] !=-1)
            return dp[i] [j ] ;
        
        if(text1[i-1] == text2[j-1])
        return dp[i][j] = 1 + f(i-1 , j-1 , text1  , text2 , dp) ;
        
        return dp[i][j] = 0 + max(f(i-1 , j , text1 , text2 , dp) , f(i , j-1 , text1 ,text2, dp));
    }
};

// tabulation 
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size() ;
        int m = text2.size() ;
        
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0)) ;
        for(int i = 0 ; i <=m ; i++)
            dp[0][i] = 0 ;
        
        for(int j  = 0 ; j<=n ; j++)
            dp[j][0] = 0 ;
        
        for(int i = 1 ; i <=n  ; i++)
        {
            for(int j = 1 ; j <=m ;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j] =  1 + dp[i-1][j-1] ;
                else
                
                dp[i][j] = 0 + max(dp[i-1][j] , dp[i][j-1]);
            }
        }
        
      return dp[n][m] ;  
    }
    
};