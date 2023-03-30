/*#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
  int n;
  cin>>n;
  int sum=0;
  int originaln=n;
   while(n>0)
   {
   int lastdigit= n%10;
   sum+= pow(lastdigit,3);
    n=n/10;
   }
   if(sum==originaln)
   {
     cout<<"Armstrong number"<<endl;
   }
   else
   {
    cout<<"not armstrong"<<endl;
   }

   return 0;
}
*/
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ; 
    cin>> n ;
    
    int sum = 0;
    int value = n ;

    while(n>0)
    {
        int last = n%10;
        sum+=pow(last,3);
        n /= 10;
    }
    if(value == sum)
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    return 0;
}