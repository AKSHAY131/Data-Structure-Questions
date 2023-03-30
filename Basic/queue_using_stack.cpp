#include<bits/stdc++.h>
using namespace std ;

class Queue
{
    int N ;
    stack<int> s1;
    stack<int> s2;
    public:
    Queue()
    {
        N =0 ;
    }

    void push(int a )
    {
      s1.push(a);
      N++;
    }
    int pop()
    {
      while(!s1.empty())
      {
        s2.push(s1.top()) ;
        s1.pop();
      }
      int item = s2.top() ;
      s2.pop();
      N--;
      return item;
    }
    int size()
    {
        return N ;
    }

};
int main()
{
    Queue q ;
    q.push(1);
    q.push(2);
    q.push(3);
    cout <<q.pop() ;
    cout<<q.size();
}