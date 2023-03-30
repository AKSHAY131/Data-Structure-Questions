youtube : https://youtu.be/irkG33phXuw

// just we have not use string const array string concept we used unordered map 


unordered_map<char, string> L({{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});

class Solution {
    private :
    
  void dfs (int pos , int len ,  string &digits , vector<string> &ans , string str )
  {
      if(pos == len )
          ans.push_back(str);
      
      string letters = L[digits[pos]];
      
      for(int i =0 ; i < letters.size() ; i++)
      {
          dfs(pos +1 , len , digits , ans , str + letters[i]);
      }
  }
    
public:
    vector<string> letterCombinations(string digits) {
        int len = digits.size() ;
        vector<string> ans ;
        
        if(!len)
            return ans ;
        dfs(0  , len , digits, ans  , "" );
        
        return ans ;
         
    }
};