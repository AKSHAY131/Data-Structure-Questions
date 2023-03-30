link : https://leetcode.com/problems/permutations/

TC : n! * n 
Sc : o(n!) + o(n)


class Solution {
private :
    void solve( vector<vector<int>> &ans , vector<int> &path , vector<int> &nums , int n , int freq[])
    {
        if(path.size() == n )
        {
            ans.push_back(path) ;
            return ;
        }
        for(int i = 0 ; i < n  ; i++)
        {
            if(!freq[i])
            {
                path.push_back(nums[i]);
                freq[i] = 1 ;
                solve( ans ,path , nums , n , freq);
                path.pop_back() ;
                freq[i] =0 ;
            }
           
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> path ;
        int freq[nums.size()];
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++)
            freq[i] = 0 ;
        
        solve( ans , path , nums , n , freq);
        return ans ;
        
    }
};

// optmised by swapping no extra recursion space required 

TC : n! * n 
Sc : o(n!) 

class Solution {
private:
    void solve (int ind , vector<vector<int>> &ans ,  int n , vector<int> &nums)
    {
        if(ind == n )
        {
            ans.push_back(path) ;
            return ;
        }
        
        for(int i = ind ; i < n ; i++)
        {
            swap(nums[ind] , nums[i]);
            path.push_back(nums[ind]);
            solve(ind+1 , ans ,  n , nums) ;
            path.pop_back() ;
            swap(nums[i] , nums[ind]);
            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n =  nums.size() ;
        vector<vector<int>> ans;
        vector<int> path ;
        
        solve (0 , ans , path , n , nums);
        return ans ;
        
    }
};