#include<bits/stdc++.h>
using namespace std ;

int solve(string n )
{
    int size = n.size() ;
    int ans = 0 ;
    int x  = 1;
    for(int i = size-1 ; i>=0 ; i--)
    {
       if(n[i]>= '0' && n[i]<='9')
       {
          ans+= x*(n[i]-'0');
       }
       if(n[i] >= 'A' && n[i] <='F')
       ans+= x * (n[i] - 'A' + 10);

       x *= 16 ;
    }  
    return ans;
}
int main()
{
   string n ;
   cin>>n ;

   cout<<solve(n) ;
   return 0 ; 
}