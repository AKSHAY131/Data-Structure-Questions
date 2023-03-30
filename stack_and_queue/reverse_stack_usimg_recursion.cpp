void insert(stack<int> &s , int ele)
{
    if(s.size() == 0)
    {
        s.push(ele) ;
        return ;
    }

    int temp = s.top() ;
    s.pop() ;
    insert(s , ele) ;
    s.push(temp) ;
    return ;
}

stack<int> reverse(stack<int> &s )
{
    if(s.size()==1)
    return s ;

    int temp = s.top();
    s.pop();

    reverse(s) ;

    insert(s , temp) ;
    retrun s ;
    
}