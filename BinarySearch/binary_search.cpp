#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
int bin(vector<int> b , int tar)
{
    int start = 0 ;
     int end = b.size()-1;

     int mid = 0 ;

     while(start <= end)
     {
        mid = start + (end - start)/2;

        if(tar > b[mid])
        {
            start = mid+1;
        }
        else if(tar ==  b[mid])
        {
            return mid;
        }
        else 
        {
            end  = mid -1 ;

        }
        

     }
     return -1 ;
}
int main()
{
    vector<int> a{2 , 3 , 5 , 10 , 25 };
    cout<< bin(a , 25);
    
}