class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0) ;
        int half = sum / 2;
        int n = nums.size() ;
        
        bool t[n+1][half+1];
        for(int i = 0 ; i < n+1 ; i++)
            t[i][0] = true ;
        for(int j = 1 ; j <half+1 ; j++)
            t[0][j] = false;
        
        for (int i = 1 ; i < n+1 ; i++)
            for(int j = 1 ; j < half+1 ; j++)
            {
                if(nums[i-1] <=j)
                    t[i][j] = t[i-1][j-nums[i-1]] or t[i-1][j] ;
                else
                    t[i][j] = t[i-1][j] ;
            }
         
        int j = half ;
        while(j>=0) 
        {
            if(t[n][j] == true )
                break ;
            j-- ;
        }
        return sum - 2*j ;
            
    }
};