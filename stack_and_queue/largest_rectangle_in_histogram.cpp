class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size() ;
        stack<int> mystack ;
        vector<int> left(n ,0), right(n , n-1) ;
        
        for(int i = 0 ; i <n ;i++)
        {
           while(!mystack.empty() and heights[mystack.top()] >=heights[i])
               mystack.pop();
            left[i] = mystack.empty() ? 0 :mystack.top() + 1 ;
            mystack.push(i) ;
        }
        
        while(!mystack.empty())
            mystack.pop() ;
        
         for(int i = n-1 ; i >=0 ;i--)
        {
            
           while(!mystack.empty() and heights[mystack.top()] >=heights[i])
               mystack.pop();
            right[i] = mystack.empty() ? n-1 :mystack.top() - 1 ;
            mystack.push(i) ;
        }
        
        int max_area =0 ;
        
        for(int i =0 ; i<n ;i++)
        {
            max_area = max(max_area , heights[i] * (right[i] - left[i] +1));
        }
        return max_area ;
    }
};