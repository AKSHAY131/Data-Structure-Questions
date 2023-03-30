
int cutRod(vector<int> &price, int n)
{
    vector<vector<int>> dp(n , vector<int> (n+1 , 0 ) );
    
    for(int tar = 0 ; tar<=n ; tar++)
        dp[0][tar] = tar * price[0] ;
    
    for(int i = 1 ; i <n ;i++)
    {
        for(int j = 0 ; j <=n ; j++)
        {
            int notTake = 0 + dp[i -1][j] ;
            int take = INT_MIN ;
            if((i+1 <= j))
                take = price[i] + dp[i][j-(i+1)];
            
            dp[i][j] = max(take , notTake) ;
                
        }
    }
    return dp[n-1][n] ;
}