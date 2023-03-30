#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main()
{
    int n , m ;
    cin >> n >> m ;
    int a[n] , b[m] ;
   
    for (int i = 0 ; i < n ; i++ )
      cin >> a[i] ;
    for(int i = 0 ; i < m ; i++)
      cin >> b[i] ;

    unordered_map<int, int>m;
    for(int i = 0 ; i < n ; i++)
      m[a[i]]++; // its not working here but it works fine 
    int c = 0;
    for(int i =0 ; i < m ; i++)
      {
         if(m[b[i]])
           c++;
        else
          cout<<"not subset ";
      }
}
