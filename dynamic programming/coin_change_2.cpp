class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size() ;
        vector<vector<int>> dp(n , vector<int>(amount+1 , 0 )) ; 
        
        for(int tar = 0 ; tar <=amount ; tar++)
        {
            if(tar%coins[0] ==0)
                dp[0][tar] = 1 ;        // just make sure coins[0] divides the target we left , in ways to return we make sure in base case we return 1
        }
        
        for(int i = 1 ; i < n ; i++)
        {
            for(int j = 0 ; j <= amount ; j++)
            {
                int notTake = dp[i-1][j] ;
                
                int take  = 0 ;
                if(coins[i] <= j)
                {
                    take = dp[i][j-coins[i]];     // you again remain at same index 
                }
                
                dp[i][j] = take + notTake ;
            }
            
        }
        return dp[n-1][amount] ;
    }
};