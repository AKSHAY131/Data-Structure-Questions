class Solution {
    private :
    int f(int i , int j , string &s1 ,string &s2 , vector<vector<int>> &dp)
    {
        if(i < 0)
        return j+1 ;
        
        if(j <0)
         return i+1 ;
        if(dp[i][j]!=-1)
            return dp[i][j] ;
        
        if(s1[i] == s2[j])
        return dp[i][j] =  f(i-1 , j-1 , s1 , s2 , dp) ;
        
       return dp[i][j] =  min(1+f(i , j-1 , s1 ,s2, dp) , min(1+f(i-1 , j , s1, s2 , dp) , 1+f(i-1 , j-1 , s1 , s2, dp)));
    }
public:
    int minDistance(string word1, string word2) {
        int n = word1.size() ;
        int m  =  word2.size() ;
        vector<vector<int>> dp(n , vector<int>(m , -1));
        return f(n-1 , m-1  ,word1 , word2 , dp);
    }
};

// tabulation 

class Solution {
   
public:
    int minDistance(string word1, string word2) {
        int n = word1.size() ;
        int m  =  word2.size() ;
        vector<vector<int>> dp(n+1 , vector<int>(m+1 , 0));

        for(int i = 0 ; i <= m ;i++)
        {
            dp[0][i] = i ;
        }
        for(int j = 0 ; j <=n ; j++)
        {
            dp[j][0] = j ;
        }
        

        for(int i =  1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                if(word1[i-1] == word2[j-1])
                dp[i][j] =  dp[i-1 ][j-1 ];
                
                else

                dp[i][j] = min(1+dp[i-1][j] , min(1+dp[i][j-1] , 1+dp[i-1][j-1]));
            }
        }
        return dp[n][m] ;
    }
};