
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
  
    vector <int> nearlySorted(int arr[], int num, int K){
        
    vector<int>ans;
    priority_queue<int , vector<int> , greater<int>> q;
    
    for(int i = 0 ; i < num  ; i++)
    {
        q.push(arr[i]);
        
        if(q.size() > K)
        {
            ans.push_back(q.top());
            q.pop();
        }
    }
    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }
    return ans ;
    }
};

