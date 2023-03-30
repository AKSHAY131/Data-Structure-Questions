vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n , -1);
    stack<int> st ;

    for(int i = 0 ; i < n ;i++)
    {
        while(!st.empty() and arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }    
    return ans ;
}