#include <iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector <int > nextpermu(vector<int>arr , int n )
{
    if (n==1)
     return arr;

    int i = 0 ;
    for (i = n-1 ; i > 0 ; i--)
    {
        if(arr[i-1]<arr[i])
         break ;
    }
    int j = n -1 ;
    for (j = n -1 ; j >= i ; j--)
    {
        if (arr[i-1]>arr[j])
         j -- ; 
         else 
          break ;  
    }
    swap (arr[i-1], arr[j]);

    reverse(arr.begin() + i , arr.end());
    return arr;
}
int main()
{
  vector <int> v {5,3,4,9,7,6};
  int size = v.size();

  vector <int> res ;
  res = nextpermu(v , size);

  for (int i = 0 ; i < res.size() ; i++)
   cout<< res[i] << " " ; 
   return 0 ;
}