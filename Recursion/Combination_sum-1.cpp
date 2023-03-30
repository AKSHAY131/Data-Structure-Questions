class Solution {
private :
    void solve(int ind , int target , vector<vector<int>> & ans , vector<int> &v , vector<int> & candidates  , int n )
    {
       if(ind ==  n )
       {
           if(target == 0)
           ans.push_back(v) ;
           return ;
       }
        
       if(candidates[ind] <= target)
       {
           v.push_back(candidates[ind]) ;
           solve(ind , target - candidates[ind] , ans , v , candidates , n ) ;
           v.pop_back() ;
       }
    
        solve(ind +1 , target , ans , v , candidates , n ) ;
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>  ans ;
        vector<int> v ; 
        int n = candidates.size() ;
        solve(0 , target , ans , v , candidates , n);
        return ans ;
    }
};