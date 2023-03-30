//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
       pair<int, int>a[n];
       for(int i = 0 ; i < n ; i++)
       {
          a[i] = {start[i] , end[i]};
       }
       sort(a , a+n );
       int ans = 1 ;
       
       int right = a[0].second;
       
       for(int i = 1 ; i < n ; i++)
       {
           if(a[i].first <=right)
           {
               if(a[i].second < right)
               {
                   right = a[i].second;
               }
           }
           else
           {
               ans++;
               right = a[i].second;
           }
       }
       return ans ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends