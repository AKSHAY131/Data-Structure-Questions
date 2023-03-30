#include<iostream>
#include<unordered_map>
using namespace std ; 

int main()
{
    int a[] = { 3 ,-1,4,0};
    int size = 4 ;
    int sum = 0 ;
    int val = 0 ;

    unordered_map <int , int > m  ;

    for (int i = 0 ;  i < size  ;  i ++)
    {
        sum += a[i] ;
        if(sum == 0 or m[sum] or a[i]==0  )
        {
            val = 1 ;
            break;
        }
        else
        {
            m[sum] = 1 ;
        }
    } 
    if (val == 1 )
      cout<< "subarray sum zero exist " ;
    
    else
      cout << "it does not exist" ;

      return 0 ;

}
