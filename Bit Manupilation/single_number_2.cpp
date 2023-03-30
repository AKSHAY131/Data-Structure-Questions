leetcode 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n= nums.size() ;
        unordered_map<int, int> mp ;
        
        for(int i = 0 ; i < n ; i++)
        {
            mp[nums[i]]++;
            
        }
        int ans;
        for(auto x : mp)
        {
            if(x.second == 1)
                ans = x.first ;
        }
        return ans ;
    }
};
bit manupilation solution
class Solution {
  public:
    int singleNumber(vector<int>& nums) {
        int counterOne = 0;
        int counterTwo = 0;
        
        for (int i = 0; i < nums.size(); i++){
            counterOne = (~counterTwo) & (counterOne ^ nums[i]);
            counterTwo = (~counterOne) & (counterTwo ^ nums[i]);
        }
        return counterOne;
    }
};