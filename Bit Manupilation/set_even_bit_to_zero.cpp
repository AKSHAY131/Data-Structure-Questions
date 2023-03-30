class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        long long int  num = log2(n)+1;
        for(int i = 0; i <num; i += 2)
        
        {
            if((1 << i) & n)
            {
                n = n ^ (1 << i);
            }
            
        }
        return n;
    }
};