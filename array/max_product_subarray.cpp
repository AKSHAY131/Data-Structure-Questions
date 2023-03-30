#include<iostream>
#include<vector>
using namespace std ; 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0] ;
        int mi = nums[0] ;
        int ma = nums[0] ;
        int n  = nums.size() ;
       for (int i = 1  ; i < n  ; i++) 
       {
           if (nums[i] < 0 )
              swap(ma , mi) ;
          
           ma = max( nums[i] , ma * nums[i]) ;
           mi = min( nums[i] , mi * nums[i] ) ;
           
           ans  = max(ma , ans) ;
       }
        return ans  ; 
    }
};
int main()
{
    vector<int> nums = { 2,3,2,-2,0,4};
    Solution ob ; 
    auto ans = ob.maxProduct(nums);
    cout << ans ;
    return 0 ;
}
