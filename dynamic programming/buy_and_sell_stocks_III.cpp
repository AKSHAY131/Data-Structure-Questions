class Solution {
 private : 
    
    int f(int ind , int buy , vector<int> &prices , int cap , int n , vector<vector<vector<int>>> &dp)
    {
        if(ind == n)
            return 0 ;
        if(cap ==0 )
            return 0 ;
        if(dp[ind][buy ][cap]!=-1)
            return dp[ind][buy ][cap] ;
        int profit  = 0 ;
         if(buy)
        {
            profit = max(-prices[ind] + f(ind+1 , 0 , prices , cap , n , dp)  , 0 + f(ind+1 , 1 , prices , cap , n, dp)) ;
        }
        else
        {
            profit = max(prices[ind] + f(ind+1 , 1 , prices , cap-1 , n, dp) , 0 + f(ind+1 , 0 , prices , cap , n, dp)) ;
        }
        
        return dp[ind][buy ][cap] =  profit ;
    }
public:
    int maxProfit(vector<int>& prices) {
        int n =  prices .size() ;
        vector<vector<vector<int>>> dp(n , vector<vector<int>> ( 2 , vector<int>(3,-1)));
        return f(0 , 1 , prices , 2 , n , dp ) ;
    }
};

// tabulation 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  =  prices.size();
        vector<vector<vector<int>>> dp(n+1 , vector<vector<int>>(2 , vector<int>(3 ,0)));
        
        for(int i = 0 ; i <=n ; i++)
        {
            for(int buy = 0 ; buy <=1 ; buy++)
                dp[i][buy][0] = 0 ;
        }
        
        for(int buy = 0 ; buy <= 1 ; buy ++)
        {
            for(int cap =0 ; cap <=2 ; cap++)
               dp[n][buy][cap] =0 ; 
        }
        
        for(int i = n-1 ;i >=0 ; i-- )
        {
            for(int buy = 0 ; buy <=1 ;  buy ++)
            {
                for(int cap = 1 ; cap <=2 ; cap++) // very imp as above cap == 0, we return 0  ; so dont include it this time as would make ans terribly go wrong
                {
                    int profit = 0 ;
                    
                    if(buy)
                    {
                        profit = max(-prices[i] + dp[i+1][0][cap] , 0 + dp[i+1][1][cap]);
                    }
                    else
                        profit =  max(prices[i] + dp[i+1][1][cap-1] , 0 +dp[i+1][0][cap] );
                    
                    dp[i][buy][cap] = profit ;
                }
            }
        }
        return dp[0][1][2];
    }
};

// space optimized 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  =  prices.size();
         vector<vector<int>> after(2 , vector<int>(3 ,0));
        vector<vector<int>> curr(2 , vector<int>(3 ,0));
        
       
        
        for(int i = n-1 ;i >=0 ; i-- )
        {
            for(int buy = 0 ; buy <=1 ;  buy ++)
            {
                for(int cap = 1 ; cap <=2 ; cap++) // very imp as above cap == 0, we return 0  ; so dont include it this time as would make ans terribly go wrong
                {
                    int profit = 0 ;
                    
                    if(buy)
                    {
                        profit = max(-prices[i] + after[0][cap] , 0 + after[1][cap]);
                    }
                    else
                        profit =  max(prices[i] + after[1][cap-1] , 0 +after[0][cap] );
                    
                    curr[buy][cap] = profit ;
                }
            }
            after = curr ;
        }
        return after[1][2];
    }
};

