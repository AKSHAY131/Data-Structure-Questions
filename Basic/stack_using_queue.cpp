#include<bits/stdc++.h>
using namespace std ;

class Stack
{
    int N =0;
    queue<int>q1;
    queue<int>q2;

    public:
    Stack()
    {
        N =0 ;
    }
    void push(int a )
    {
        q2.push(a);
        N++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
    }

    void pop()
    {
        q1.pop();
        N--;
    }
    int size ()
    {
        return N;
    }
    int top()
    {
        return q1.front();
    }

};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.size()<<endl;
    s.pop();
    cout<< s.top();
    
    return 0;
}