class Solution {
    private:
    
    int f(int i , int j , vector<int> &cuts)
    {
        if(i > j )
            return 0 ;
        
        int mini = INT_MAX ;
        
        for(int k = i ; k <=j ;k++ )
        {
            int cost = cuts[j+1] - cuts[i-1 ] + f(i , k-1, cuts ) + f(k+1 , j, cuts) ;
            mini = min(mini , cost) ;
        }
        return mini ;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        int j =  cuts.size() ;
        cuts.push_back(n) ;
        cuts.insert(cuts.begin() , 0 ) ;
        sort(cuts.begin() , cuts.end()) ;
        
        return f(1 , j , cuts) ; 
    }
};
// memoziation
class Solution {
    private:
    
    int f(int i , int j , vector<int> &cuts, vector<vector<int>> &dp)
    {
        if(i > j )
            return 0 ;
        if(dp[i][j]!=-1)
            return dp[i][j] ;
        int mini = INT_MAX ;
        
        for(int k = i ; k <=j ;k++ )
        {
            int cost = cuts[j+1] - cuts[i-1 ] + f(i , k-1, cuts, dp ) + f(k+1 , j, cuts, dp) ;
            mini = min(mini , cost) ;
        }
        return dp[i][j] = mini ;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        int j =  cuts.size() ;
        cuts.push_back(n) ;
        cuts.insert(cuts.begin() , 0 ) ;
        sort(cuts.begin() , cuts.end()) ;
        
        vector<vector<int>> dp(j+1 , vector<int>(j+1 , -1));        
        return f(1 , j , cuts , dp) ; 
    }
}; 
