#include<bits/stdc++.h>
using namespace std ; 
int main()
{
    string s1 , s2 , res ;
    cin >> s1 >>s2>> res ;
    int i = s1.length();
    int j = s2.length() ;
    int k = res.length();
    if(i+j!=k)
     cout << "Not a valid shuffle" ;
     
     else 
      { int m = 0 ;
       int  n = 0 ;
       int w = 0;
       int f = 0;

       while(w < k )
       {
           if(s1[m] == res[k] and m < i )
            m++ ;
            else if (s2[n]==res[k] and n < j )
            n++ ;
            else
            {
                f = 1 ;
                break ;
            }
       }
       if(f==1 )
        cout << " a valid shuffle " ;
        else
        cout <<"not a valid ";
      }
}