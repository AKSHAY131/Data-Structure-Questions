class Solution {
public:
    string countAndSay(int n) {
        
        if(n == 0)
            return "";
        
        if(n ==1)
            return "1";
        
        if(n ==2)
            return "11";
        
       string res = "11" ;
        
        for(int i = 3 ; i <= n ; i++)
        {
            string t = "" ;
            int c = 1;
            res = res + '$' ;
            
            for(int j = 1; j< res.size() ; j++)
            {
                if(res[j]!=res[j-1])
                {
                    t = t+to_string(c) ;
                    t= t+res[j-1];
                    c = 1 ;
                }
                
                else 
                    c++;
            }
            
            res = t ;
        }
        
        return res ;
        
    }
};