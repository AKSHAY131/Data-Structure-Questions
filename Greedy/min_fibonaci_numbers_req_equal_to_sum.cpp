leet code 

youtube : https://www.youtube.com/watch?v=w3zD7kyJE8U&ab_channel=Fraz

class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v ={1,1} ;
        int f = 1 , s= 1 ; 
        
        while(1)
        {
            if( f+s > k )
                break ;
            
            v.push_back(f+s) ;
            f = s ;
            s= v.back() ;
        }
        
        int ans  =0 ;
        
        for(int i = v.size()-1 ; i>=0 ; i--)
        {
            if(v[i] <=k)
            {
                ans++ ;
                k = k -v[i] ;
            }
            if(k==0)
             break ;
        }
        return ans ;
        
    }
};