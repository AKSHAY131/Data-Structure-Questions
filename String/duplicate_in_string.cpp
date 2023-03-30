#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "akshay ranka";
    map<char, int> m ;
    cout<<"started "<<endl;
    for(int i  = 0 ; i < s1.length() ; i ++)
       m[s1[i]]++ ;
    for(auto it : m )
    {
        if(it.second > 1 )
        {
            cout << it.first <<" "<<it.second <<endl ;
        }
    }
  return 0 ;
}