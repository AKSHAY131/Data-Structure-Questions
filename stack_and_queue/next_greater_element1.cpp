#include<bits/stdc++.h>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m ;
        stack<int> s; 
        vector<int> ans;
        for(auto n : nums2)
        {
            while( s.size()  and  (s.top() < n) )
            {
                m[s.top()] = n ;
                s.pop();
            }
            s.push(n);
         }
        
        for( auto k : nums1)
        {
           ans.push_back(m.count(k) ? m[k] : -1);
        }
        return ans ;
    }
};