class Solution
{
public :
    void solve(int ind , int sum , vector<int> &ans , int N , vector<int> &arr)
    {
        if(ind == N )
        {
        ans.push_back(sum) ;
        return ;
        }
        
        solve(ind + 1 , sum + arr[ind] , ans , N , arr);
        
        solve(ind + 1 , sum , ans , N , arr) ; 
        
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N )
    {
        // Write Your Code here
        vector<int> ans ;
        solve (0 , 0 , ans , N , arr );
        sort(ans.begin() , ans.end());
        return ans ;
    }
};