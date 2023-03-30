// no duplicate subset allowed , that is the question ;

class Solution {
private :
    void solve(int ind , vector<int> &ds , vector<vector<int>> &ans ,vector<int> &nums)
    {
        ans.push_back(ds) ;
        for(int i  = ind ; i < nums.size() ; i++)
        {
            if(i!=ind and nums[i] == nums[i-1])
                continue ; 
            ds.push_back(nums[i]);
            solve(i+1, ds , ans , nums) ;
            ds.pop_back() ;
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds ;
        vector<vector<int>> ans ;
        sort(nums.begin() , nums.end());
        solve (0 , ds , ans , nums );
        return ans ;
    }
};