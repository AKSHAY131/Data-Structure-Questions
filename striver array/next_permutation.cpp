video link : https://www.youtube.com/watch?v=6qXO72FkqwM&ab_channel=TECHDOSE

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() ;
        int k , l ;
        
        for( k = n-2 ; k >=0 ; k--)
        {
            if(nums[k] < nums[k+1])
                break ;
        }
        if(k <0)
        {
            reverse(nums.begin() , nums.end());
            return ;
        }
        
        
        for(l = n-1; l>k ; l--)
        {
            if(nums[l] > nums[k] )
            {
                swap(nums[l] , nums[k]);
                break ;
            }
            
        }
        sort(nums.begin() + k+1 , nums.end());
        
    }
};