#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
void insert(vector<int>&v , int x)
 {
     if(v.size() == 0 or v[v.size()-1 ]<= x)
     {
         v.push_back(x) ; 
         return ;  
     }
     int val = v[v.size()- 1] ;
     v.pop_back() ;
     insert (v , x);
     v.push_back(val) ;


 }
void sort(vector<int> &v)
{
    if(v.size() == 1)
    return ;

    int temp  = v[v.size() - 1];
    v.pop_back() ;
    sort( v) ;
    insert (v , temp);
}

int main ()
{
cout<<"you can start" ;
int n ;
cin>>n;
vector<int> v;

for(int i = 0  ; i< n; i++)
{
  int temp ;
  cin >> temp ;
  v.push_back(temp) ;
}
   sort(v) ;
   cout<< endl;
   for(auto it : v)
    cout << it <<" " ;
}