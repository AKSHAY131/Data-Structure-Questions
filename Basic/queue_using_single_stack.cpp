#include<bits/stdc++.h>
using namespace std ;

class Queue
{
    int N ;
    stack<int> s;

    public :
    Queue()
    {
       N = 0 ;
    }

    void push(int a)
    {
        s.push(a);
    }

    int pop()
    {
        if(s.empty())
        {
         cout<<"Q is empty";
         exit(0);
        }
       
        int x =s.top();
        s.pop();

        if(s.empty())
        return x;

        int item = pop() ;
        s.push(x);

        return item;
    }

};

int main()
{
    Queue q ;
    q.push(1);
    q.push(2);
    q.push(3);
    cout <<q.pop();
}   