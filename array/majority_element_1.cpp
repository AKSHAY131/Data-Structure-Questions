/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/
#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count  = 0 ;
        int element ;
        // moore voting algorithm 
        for(int &num : nums )
        {
            if (count ==0)
            {
                element = num ;
            }
            
            if(element == num) 
                count +=1;
            else
                count -=1;
        }
        return element ;
    }
};