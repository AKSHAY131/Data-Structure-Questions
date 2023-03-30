#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int x ;
    cin >> x;
    
    vector<int> ans;
    
    while(x > 0)
    {
        int y = x % 2;
        ans.push_back(y) ;
        x /=2 ;
    }
    reverse(ans.begin() , ans.end());

    for(auto i : ans)
    cout<<i;
}