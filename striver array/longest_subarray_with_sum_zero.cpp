Bruete Force :

int ans = 0 ; 
for(int i = 0 ; i < n ; i++)
{
    int sum = 0 ;
    for(int j = i ; j < n ; j++)
    {
        sum += arr[j] ;
        if(sum == 0)
         ans = max(ans , j-i+1)
    }
}
return ans ;

// Optimal solution 

unorderd_map<int , int> m ;
int sum = 0 ;
int maxi = 0 ;

for(int i = 0 ; i <n ; i++)
{
    sum += nums[i] ;
    if(sum == 0)
     maxi = i+ 1;

     else
     {
        if(m.find(sum) != m.end())
        {
            maxi = max(maxi ,  i - m[sum]);
        }
        else
        {
            m[sum ] = i ;
        }
     }
}
return maxi ; 