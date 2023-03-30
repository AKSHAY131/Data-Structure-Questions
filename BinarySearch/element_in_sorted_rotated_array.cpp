#include<bits/stdc++.h>
using namespace std ;
int bin(vector<int> a , int tar)
{
    int start = 0; 
    int end  = a.size()-1;
    int mid  =0 ;

    while(start <= end)
    {
        mid = start  + (end-start)/ 2 ;
        if(a[mid] == tar)
        {
        return mid;
        }
        
        if(a[start] <= a[mid])
        {
            if(tar >= a[start] and tar <= a[mid])
            end = mid - 1 ;

            else
            start  = mid + 1;
        }
        else
        {
        if(tar > a[mid] and tar <= a[end])
        start = mid +1 ;
        
        else
        end = mid-1;
        }
        
    }
    return -1;
}

int main()
{
    vector<int> v{11 , 12 , 15 , 18 , 2 , 5 ,6 , 8};

    cout<<bin(v , 6);
}