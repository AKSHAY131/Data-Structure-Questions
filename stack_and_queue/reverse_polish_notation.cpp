class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<int> st ;
      for(auto &e : tokens)
      {
          if(e == "+")
          {
              int a = st.top();
              st.pop();
              int b = st.top() ;
              st.pop();
              st.push(a+b);
          }
          
          else if (e =="-")
          {
              int a = st.top();
              st.pop();
              int b = st.top() ;
              st.pop();
              st.push(b-a);
          }
              
          else if(e =="*")
           {
              int a = st.top();
               st.pop();
              int b = st.top() ;
               st.pop();
              st.push(a * b);
           }
           else if( e =="/")
           {
              int a = st.top();
               st.pop();
              int b = st.top() ;
               st.pop();
              st.push(b/a);
           }
            else
            st.push(stoi(e));
      }
        return st.top();
    }
};


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int var2 = st.top(); st.pop();
                int var1 = st.top(); st.pop();
                if(token == "+") st.push(var1+var2);
                else if(token == "-") st.push(var1-var2);
                else if(token == "*") st.push(var1*var2);
                else if(token == "/") st.push(var1/var2);
            } else {
                int x = stoi(token);
                st.push(x);
            }
        }
        return st.top();
    }
};