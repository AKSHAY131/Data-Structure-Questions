class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size() ;
        int m  = t.size() ;
        vector<vector<int>> dp(n , vector<int>(m , -1)) ;
        return f(n-1 , m-1 , s , t , dp ) ; 
    }
    int f( int ind1 , int ind2 , string &s1 , string & s2 , vector<vector<int>>&dp)
    {
        if(ind2 <0)
            return 1 ;
        if(ind1<0)
            return 0 ;
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2] ;
        if(s1[ind1] == s2[ind2])
            return dp[ind1][ind2] = f(ind1-1 , ind2-1 , s1 , s2 , dp ) + f(ind1-1 , ind2 , s1, s2, dp );
        
        else
            return dp[ind1][ind2] = f(ind1 - 1 , ind2 ,s1 , s2, dp);
    }
};
// due to overflow we used double and typecasted our answer 
// tabulation answer 
class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size() ;
        int m  = t.size() ;
        vector<vector<double>> dp(n+1 , vector<double>(m+1 , 0)) ;
        
    
        for(int j =0 ; j <= n ; j++)
            dp[j][0] = 1 ;
        for(int i = 1 ; i <=n ; i++)
        {
            for(int j = 1 ; j <=m  ; j++)
            {
                if(s[i-1] == t[j-1])
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1] ;
                
                else
                    dp[i][j] = dp[i-1][j] ;
            }
        }
     return (int)dp[n][m] ; 
    }
   
     
};