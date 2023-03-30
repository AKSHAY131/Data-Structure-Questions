class Solution {
    private :
    bool f(int ind1 , int ind2 , string &s , string&p , vector<vector<int>> &dp)
    {
        if(ind1 <0 and ind2 <0)
            return true ;
        if(ind2 < 0 and ind1 >=0 )
            return false ;
        if(ind2 >=0 and ind1<0)
        {
            while(ind2 >=0)
            {
               if( p[ind2] == '*')
                ind2-- ;
                
                else 
                return false ; 
            }
            return true ;
        }
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        
        if(s[ind1]==p[ind2] or p[ind2] == '?')
            return dp[ind1][ind2] =  f(ind1 - 1 , ind2 -1 , s , p ,dp);
        
        else if( p[ind2] == '*')
           return dp[ind1][ind2] =  f(ind1 , ind2 -1 , s , p , dp) or f(ind1-1 , ind2 , s , p , dp);
        
        else
            return dp[ind1][ind2] =  false ;
        
    }
public:
    bool isMatch(string s, string p) {
        int n =  s.size() ;
        int m = p.size() ;
        vector<vector<int>> dp(n , vector<int>(m , -1));
        return f(n-1 , m-1 , s , p , dp ) ;
    }   
};

// tabulation 

class Solution {
    
public:
    bool isMatch(string s, string p) {
        int n =  s.size() ;
        int m = p.size() ;
        vector<vector<bool>> dp(n+1 , vector<bool>(m+1 , false));
        
        dp[0][0] = true ;
        int k = 0 ;
        for(int j = 1 ; j <= m ; j++)
        {
            if(p[j-1] == '*')
                k++;
            
            else  break; 
        }
        while(k > 0)
        {
            dp[0][k] = true ;
            k-- ;
        }
        
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                 if(s[i-1]==p[j-1] or p[j-1] == '?')
                  dp[i][j] =  dp[i - 1] [ j -1 ]  ;
                
                 else if( p[j-1] == '*')
                 dp[i][j] =  dp[i ][ j -1 ]   or dp[i-1] [ j] ;
                
                else
                dp[i][j] =  false ;
        
              
            }
        }
            
       
       return dp[n][m] ;
        
    }   
   
};