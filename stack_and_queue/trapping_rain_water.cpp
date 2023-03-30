class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int> left(n ,0 ) , right(n ,0) ;
        int max_left = height[0] ;
        int max_right =height[n-1] ;
        
        for(int i =1 ; i <n ; i++)
        {
            left[i] = max_left;
            if(height[i] > max_left )
                max_left = height[i] ;
        }
        for(int i =n-2 ; i >=0 ; i--)
        {
            right[i] = max_right;
            if(height[i] > max_right )
                max_right = height[i] ;
        }
        int ans = 0;
        for(int i = 1 ; i <n-1 ; i++)
        {
            if(height[i] < left[i] and height[i] <right[i])
            ans += min(left[i] , right[i]) - height[i];
        }
        return ans ;
    }
};