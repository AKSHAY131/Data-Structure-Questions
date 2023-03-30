Knight Probability in Chessboard leet code

class Solution {
    private :
    double find(int N , int K , int r , int c , vector<vector<vector<double>>> &dp)
    {
        if(r <0 or c <0 or r>=N  or c >=N )
            return  0 ;
        
        if(K==0)
            return 1 ;
        
        if(dp[r][c][K]!=-1)
            return dp[r][c][K] ;
        
        double p = find(N,K-1,r+1,c+2,dp) + find(N,K-1,r-1,c-2,dp) +
                   find(N,K-1,r+2,c+1,dp) + find(N,K-1,r-2,c-1,dp) +
                   find(N,K-1,r+1,c-2,dp) + find(N,K-1,r-1,c+2,dp) +
                   find(N,K-1,r+2,c-1,dp) + find(N,K-1,r-2,c+1,dp);
        
        p /=8 ;
        dp[r][c][K] = p ;
        
        return dp[r][c][K] ;
    }
public:
    double knightProbability(int n, int k, int row, int column) {
         vector<vector<vector<double>>> dp(n,vector<vector<double>>(n,vector<double>(k+1 , -1))); // [row][col][step]
        return find(n,k,row,column,dp);
    }
};