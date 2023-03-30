class Solution {
    private :
    
    int f(int ind , int prev_ind , vector<int> &nums , int n )
    {
        if(ind == n )
            return 0 ;
        
        int len  =  0 + f(ind+1 , prev_ind, nums , n) ;
        
        if(prev_ind ==-1 or (nums[ind] > nums[prev_ind]))
        {
        len = max(len ,1 + f(ind+ 1 , ind , nums , n)) ;
        }
        
        return len ;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        
        return f(0 ,-1 , nums , n) ;
    }
};

// memoization 
class Solution {
    private :
    
    int f(int ind , int prev_ind , vector<int> &nums , int n , vector<vector<int>> &dp)
    {
        if(ind == n )
            return 0 ;
        if(dp[ind][prev_ind+1] !=-1)
            return dp[ind][prev_ind+1];
        int len  =  0 + f(ind+1 , prev_ind, nums , n, dp) ;
        
        if(prev_ind ==-1 or (nums[ind] > nums[prev_ind]))
        {
        len = max(len ,1 + f(ind+ 1 , ind , nums , n, dp)) ;
        }
        
        return dp[ind][prev_ind+1] =  len ;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        vector<vector<int>> dp(n , vector<int>(n+1, -1)) ;
        
        return f(0 ,-1 , nums , n , dp) ;
    }
};
// tabulization

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        vector<vector<int>> dp(n+1 , vector<int>(n+1, 0)) ;
        
        for(int ind = n-1 ; ind >=0 ; ind--)
        {
            for(int prev_ind  = ind-1 ; prev_ind >=-1 ; prev_ind--)
            {
             int len  =  0 + dp[ind+1] [prev_ind+1] ;
            if(prev_ind == -1 or (nums[ind] > nums[prev_ind]))

                len = max (len , 1 + dp[ind+1][ind+1]);
                dp[ind][prev_ind+1] = len ;
            }
            
        }
       return dp[0][0] ; 
    }
};
// space optmized 
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
         vector<int> after(n+1, 0) ;
        vector<int> curr(n+1 , 0 );
        
        for(int ind = n-1 ; ind >=0 ; ind--)
        {
            for(int prev_ind  = ind-1 ; prev_ind >=-1 ; prev_ind--)
            {
             int len  =  0 + after [prev_ind+1] ;
            if(prev_ind == -1 or (nums[ind] > nums[prev_ind]))

                len = max (len , 1 + after[ind+1]);
                curr[prev_ind+1] = len ;
            }
            after = curr ;
            
        }
      return  after[0] ; 
    }
};
// simple tabulation single array solution 

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
         vector<int> dp(n, 1) ;
        int maxi = INT_MIN;
        for(int ind = 0 ; ind <n ; ind++)
        {
            for(int prev_ind = 0 ; prev_ind < ind ; prev_ind++)
            {
                if(nums[prev_ind] <  nums[ind])
                    dp[ind] = max (dp[ind] , 1+dp[prev_ind] ) ;
            }
            maxi = max(maxi , dp[ind]) ;
        }
        return maxi ;
    }
            
        
};