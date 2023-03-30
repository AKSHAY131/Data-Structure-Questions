class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 0 ;
        while(n)
        {
            int temp = n % 2;
            if(temp == 1)
                ans++;
            n =n /2;
        }
        if(ans ==1)
            return true ;
        else 
            return false ;
    }
};

// another way 

 n &= n-1 ;

 if(n==0)
 then power of 2 

 else 
 not power of 2