class MyStack {
public:
    int tope ;
    queue<int> p ;
    queue<int> s ;
    MyStack() {
        
    }
    
    void push(int x) {
     p.push(x);
     tope = x ;
    }
    
    int pop() {
     while(p.size()!=1)
     {
         s.push(p.front());
         tope = p.front();
         p.pop();
     }
        int ele = p.front();
        p.pop();
        swap(p , s);
        return ele ;
    }
    
    int top() {
       return tope ; 
    }
    
    bool empty() {
      return p.empty() ;  
    }
};