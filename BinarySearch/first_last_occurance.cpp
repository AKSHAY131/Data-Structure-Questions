class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans (2,-1) ;
        ans[0] = first(nums , target);
        ans[1] = last(nums , target);
        return ans  ;     
    } 
    private :
    
    int first(vector<int>& nums, int target)
    {
        int start = 0 ;
        int end = nums.size() - 1;
        int temp = -1 ;
        
        while(start <= end)
        {
            int mid = start + (end -start)  / 2 ;
            if(nums[mid] == target )
            {
                temp = mid ;
                end =  mid -1 ;
                
            }
            else if( nums[mid] > target)
                end = mid- 1 ;
            
            else
                start = mid+ 1 ;           
        }
        return temp ;
    }
    int last(vector<int>& nums, int target)
    {
        int start = 0 ;
        int end = nums.size() - 1;
        int temp = -1 ;
        
        while(start <= end)
        {
            int mid = start + (end -start)  / 2 ;
            if(nums[mid] == target )
            {
                temp = mid ;
                 start =  mid + 1 ;
                
            }
            else if( nums[mid] > target)
                end = mid- 1 ;
            
            else
                start = mid+ 1 ;           
        }
        return temp ;
    }
};