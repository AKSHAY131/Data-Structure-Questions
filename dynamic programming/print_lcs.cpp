
int len = dp[n][m] ;
string  ans = " ";

for(int i =0 ; i <len ; i++)
  ans += '$' ;

int index = len-1 ;
int i = n , j = m ;

while(i >0 and j >0 )
{
    if(s1[i-1] == s2[j-1])
     {
         ans[index] = s1[i-1] ;
         index-- ;
         i-- ;
         j-- ;
     }
     else if(dp[i-1][j] > dp[i][j-1]
         i-- ;
        
     else
          j-- ;
     )
 cout <<  ans ;
}