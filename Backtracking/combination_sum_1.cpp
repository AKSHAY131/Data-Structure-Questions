striver solution is best 

class Solution {
    void solve (int ind , int size , vector<int>& candidates, int target, vector<int> &ds ,vector<vector<int>> &ans )
    {
        if(ind == size)
        {
            if(target == 0)
             ans.push_back(ds);
            return ;
        }
        
        if(candidates[ind] <= target)
        {
            ds.push_back(candidates[ind]);
            solve(ind  , size , candidates , target-candidates[ind] , ds  ,ans);
            ds.pop_back() ;
        }
        solve(ind +1  , size , candidates , target , ds, ans);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ;
        vector<int> ds ;
        int n = candidates.size();
        solve(0 , n , candidates , target , ds , ans);
        
        return ans ;
    }
};