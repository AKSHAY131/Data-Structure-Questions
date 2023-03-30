class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size() ;
        
        vector<vector<int>> dp(n+2 , vector<int>(2 , 0 ));
        
        for(int i = n-1 ; i >=0 ; i--)
        {
            for(int buy = 0 ; buy <=1 ; buy++)
            {
                int profit = 0 ;
                if(buy)
                {
                    profit = max(-prices [i] + dp[i+1][0] , 0 + dp[i+1][1]) ;
                }
                else
                {
                    profit = max(+prices[i] + dp[i+2][1] , 0 + dp[i+1][0] ) ;
               
                }
                dp[i][buy] = profit ;
            }
            
        }
        return dp[0][1] ;
    }
};
// space optmized
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n  = prices.size() ;
        
        vector<int> curr(2 , 0 );
        vector<int> after(2 , 0 ) ;
        vector<int> later(2 , 0 );
        
        for(int i = n-1 ; i >=0 ; i--)
        {
            for(int buy = 0 ; buy <=1 ; buy++)
            {
                int profit = 0 ;
                if(buy)
                {
                    profit = max(-prices [i] + after[0] , 0 + after[1]) ;
                }
                else
                {
                    profit = max(+prices[i] + later[1] , 0 + after[0] ) ;
               
                }
                curr[buy] = profit ;
            }
            
            later = after ;
            after = curr ; 
            
        }
        return after[1] ;
    }
};