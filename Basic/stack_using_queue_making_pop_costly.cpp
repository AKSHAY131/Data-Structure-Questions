#include<bits/stdc++.h>
using namespace std ;

class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

    public :
    Stack()
    {
        N = 0;
    }

    void push(int a )
    {
       q1.push(a);
       N++;
    }
    void pop()
    {
        if(q2.empty())
        {
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
        }
        q2.pop();
        N--;
    }
    int size()
    {
        return N ;
    }
    int top()
    {
        if(q1.empty())
        return q2.front();
        else
        return q1.front();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    cout<<s.top();
    s.push(4);
    cout<<s.top();

}