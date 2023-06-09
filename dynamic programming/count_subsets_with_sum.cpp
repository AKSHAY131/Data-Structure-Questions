class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end() , 0 );
        if(sum % 2!=0)
            return false ;
        sum /= 2;
        
        int n = nums.size() ;
        
        bool t[n+1][sum+1];
        
        for(int i = 0 ; i < n+1 ; i++)
            t[i][0] = true ;
        for(int j = 1 ; j < sum+1 ; j++)
            t[0][j] = false ;
        
        for(int i = 1 ; i < n+1 ; i++)
            for(int j =1 ; j < sum+1 ; j++)
            {
                if(nums[i-1] <= j)
                    t[i][j] = t[i-1][j-nums[i-1]] or t[i-1][j];
                
                else
                    t[i][j] = t[i-1][j];
            }
        return t[n][sum];
        
    }
};