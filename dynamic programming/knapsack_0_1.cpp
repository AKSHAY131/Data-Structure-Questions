int f(int ind , int w , vector<int> &value , vector<int> &weight , vector<vector<int>> &dp )
{
    if(ind == 0)
    {
        if(weight[0] <= w )
        {
            return value[0] ;  
        }
        else 
            return 0 ;
    }
    if(dp[ind][w]!=-1)
        return dp[ind][w] ;
    int notPick = 0 + f(ind-1 , w , value , weight, dp) ;
    
    int pick  =INT_MIN ;
    if(weight[ind] <= w )
    {
        pick = value[ind] + f(ind-1 , w-weight[ind] , value , weight, dp) ;
    }
    return dp[ind][w] = max(pick , notPick);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>> dp(n , vector<int>(maxWeight + 1 , -1));
    return f(n-1 , maxWeight ,value , weight , dp ) ;
}


// memoization 

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>> dp(n , vector<int>(maxWeight + 1 , 0));
    for(int i  = weight[0] ; i <=maxWeight ; i++)
        dp[0][i] = value[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = 0 ; j <= maxWeight ; j++)
        {
            int notPick = 0 + dp[i-1][j];
    
            int pick  =INT_MIN ;
            if(weight[i] <= j)
            {
              pick = value[i] + dp[i-1][j-weight[i]];
             }
              dp[i][j] = max(pick , notPick);
        }
    }
    return dp[n-1][maxWeight] ;
}