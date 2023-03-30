#include<bits/stdc++.h>
using namespace std ;

class Queue
{
    int *arr ;
    int start ;
    int end ;
    int currSize;
    int maxSize;

    public :

    Queue()
    {
        arr = new int[16];
        start = -1 ;
        end   = -1;
        currSize = 0 ;   
    }
    Queue(int maxSize)
    {
        this->maxSize = maxSize ;
        arr = new int[maxSize] ;
        start = -1;
        end = -1 ;
        currSize = 0 ;      
    }
    void push(int x )
    {
       if(currSize == maxSize)
       {
        cout<< "Queue is full" <<endl ;
        return ;
       }
       if(end == -1)
       {
        end  = 0;
        start = 0 ;
       }
       else 
       end = (end + 1 ) % maxSize;

       arr[end] = x ;
       cout<<"The element pushed is " << x <<endl; 
       currSize++;

    }
    int pop()
    {
        if(start == -1 )
        {
        cout<<"The queue is empty" <<endl;
        return 0 ;
        }

        int x  = arr[start];
        if(currSize == 1)
        {
            start = -1 ;
            end = -1 ;
        }
        start = (start+1) % maxSize;
        currSize--;
        return x ;

    }
    int top()
    {
        if(start == -1)
        {
            cout<<"Queue is empty" <<endl;
            return 0;
        }

        return arr[start] ;

    }
    int size()
    {
        return currSize;
    }

};
int main()
{
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}