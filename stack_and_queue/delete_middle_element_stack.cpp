class Solution
{
    public:
    //Function to delete middle element of a stack.
    stack<int> solve (stack<int> &s , int k )
    {
        if(k==1)
        {
        s.pop() ;
        return s ;
        }
        int temp = s.top();
        s.pop() ;
        solve(s , k-1);
        s.push(temp) ;
        return s ;
        
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int k ;
        if(sizeOfStack % 2==0)
         k = sizeOfStack / 2 ;
        
        else
         k = sizeOfStack / 2 + 1 ;
        
        solve (s , k);
        
    }
};