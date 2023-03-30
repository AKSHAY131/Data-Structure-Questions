class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector<vector<int>> solve ;
        int n = nums.size() ;
        sort(nums.begin() , nums.end()) ;
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i+1 ; j <n ; j++)
            {
                long long value = (long long)target - (long long)nums[i] - (long long)nums[j] ;
                
                int front =  j+1; 
                int back = n-1 ;
                
                while(back > front)
                {
                    if(value > nums[back] + nums[front])
                      front++ ;
                    
                    else if(value < nums[back] + nums[front])
                        back--;
                    
                    else
                    {
                        vector<int> ans(4,0) ;
                        ans[0] = nums[i];
                        ans[1] = nums[j] ;
                        ans[2] = nums[front];
                        ans[3] = nums[back] ;
                        
                        solve.push_back(ans);
                        
                        while(front < back and nums[front] == ans[2])
                            front++;
                        
                        while(front < back and nums[back] == ans[3])
                            --back ;
                    }
                    
                        
                }
                while(j+1 < n and nums[j] == nums[j+1])
                    j++;
            }
            while(i+1 < n and nums[i] == nums[i+1])
                i++;
        }
        
       return solve ; 
    }
};