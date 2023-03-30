#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int> i ;
    stack<int> o ;
    
    public :
    MyQueue() {
        
    }
    
    void push(int x) {
     i.push(x);   
    }
    
    int pop() {
       if(o.empty())
       {
           while(!i.empty())
           {
               o.push(i.top());
               i.pop();
           }
       }
      
        int ele = o.top();
        o.pop();
        return ele;
    }
    
    int peek() {
        if(o.empty())
        {
            while(!i.empty())
            {
                o.push(i.top());
                i.pop();
            }
        }
        return o.top();
    }
    
    bool empty() {
        return i.empty() and o.empty();
    }
};
int main()
{
    
}
