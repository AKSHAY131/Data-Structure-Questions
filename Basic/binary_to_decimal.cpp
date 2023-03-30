/*#include<bits/stdc++.h>
using namespace std ;

int binarytodecimal(int n )
{
    int ans = 0 ;
    int x= 1;
    while(n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2 ;
        n /= 10; 
    }
    return ans;
}

int main()
{
    int n ;
    cin>> n ;

    cout<< binarytodecimal(n);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int fun(int x )
{
    int val = 0;
    int z  = 1 ;
    while(x>0)
    {
     int y = x%10;
     val += y*z;
     z*=2;
     x/=10;

    }
    return val;
}
int main()
{
    int n ; 
    cin >> n ;

    int ans =  fun(n);
    cout<< ans;

}