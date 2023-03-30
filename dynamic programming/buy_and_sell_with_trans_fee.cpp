class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
     
        int n  = prices.size() ;
        
        vector<int> curr(2 , 0 );
        vector<int> after(2 , 0 ) ;
        
        
        for(int i = n-1 ; i >=0 ; i--)
        {
            for(int buy = 0 ; buy <=1 ; buy++)
            {
                int profit = 0 ;
                if(buy)
                {
                    profit = max(-prices [i] + after[0] , 0 + after[1]) ;
                }
                else
                {
                    profit = max(+prices[i] + after[1] - fee , 0 + after[0] ) ;
               
                }
                curr[buy] = profit ;
            }
            
        
            after = curr ; 
            
        }
        return after[1] ;
    }
};
    