// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.


class Solution {
public:
  bool isSubsequence(string s, string t) {
        
        int m = s.size() ;
        int k = t.size();
        int i = 0 ; 
        int j =  0 ;
        
        while(i < m and j < k )
        {
            if(s[i] == t[j])
                i++ ;
            j++ ;
        }
       return  i == m ? 1:0 ;
    }
};