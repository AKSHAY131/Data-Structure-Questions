class Solution {
private :
    void solve(int ind , vector<string> &path , vector<vector<string>> &ans , string &s)
    {
        if(ind == s.size())
        {
            ans.push_back(path) ;
            return ;
        }
        
        for(int i =ind  ; i < s.size() ; i++)
        {
           if(ispalin(s , ind ,i))
           {
               path.push_back(s.substr(ind , i-ind+1 ));
               solve(i+1, path , ans , s);
               path.pop_back() ;
           }
        }
    }
    bool ispalin(string s , int start , int end)
    {
        while(end >= start)
        {
            if(s[start++] != s[end--])
              return false ;
            
        }
        return true ;
    }
public:
    vector<vector<string>> partition(string s) {
    vector<vector<string>> ans ;
    vector<string> path ;
    
    solve(0, path , ans ,s);
    return ans;
        
    }
};