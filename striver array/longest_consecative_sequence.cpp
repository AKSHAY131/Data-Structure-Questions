class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset ;
        for(int num : nums)
        {
            hashset.insert(num);
        }
        
        int longest_sequence = 0 ;
        
        for (int num : nums)
        {
            if(!hashset.count(num-1))
            {
                int current_num = num ;
                int current_longest = 1 ;
                
                while(hashset.count(current_num + 1 ))
                {
                    current_num += 1 ;
                    current_longest += 1 ;
                      
                }
              longest_sequence = max(longest_sequence , current_longest);
            }
            
           
        }
        return longest_sequence;
    }
};