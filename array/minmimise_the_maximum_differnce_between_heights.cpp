#include <iostream>
#include <bits/stdc++.h>
using namespace std ;

int getmindiff(int arr[], int size , int k )
{
    int smallest = arr[0] + k ;
    int largest = arr[size -1 ] - k ;
    int ans = arr[size - 1 ] - arr[0]; 
    
    for (int i = 0 ; i < size -1 ; i++)
    {
        int mini = min(smallest , (arr[i+1]- k) );
        int maxi = max(largest, (arr[i] + k));
        if (mini < 0)
         continue;
        ans = min (ans , maxi-mini);
    }
    return ans ;
}
int main ()
{
    int arr[]={1 , 5 , 15 , 10};
    int size =sizeof(arr)/ sizeof (arr[0]);
    sort(arr , arr + size);
    int k = 3 ;
    int ans = getmindiff(arr , size , k );
    cout << ans ; 
    return 0;
}