class Solution {
private :
    void solve(int ind , vector<int> &nums , vector<int> &path , vector<vector<int>> & ans , int n )
    {
       
        if(ind == n )
        {
            ans.push_back(path) ;
            return ;
        }
      
        path.push_back(nums[ind]);
        solve (ind+ 1 , nums , path , ans, n  );
        path.pop_back() ;
        
       solve(ind + 1 , nums , path , ans , n) ;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans ;
        vector<int> path ;
        int n = nums.size() ;
        solve (0 , nums , path , ans , n );
        return ans; 
    }
};