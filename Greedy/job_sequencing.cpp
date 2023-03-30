class Solution 
{
    public:
    static bool comparison(Job a , Job b)
    {
        return (a.profit > b.profit );
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
     vector<int>ans ;
     sort(arr, arr + n , comparison);
     
     int maxi = arr[0].dead;
     for(int i = 1 ; i < n ; i++)
     {
         maxi = max(maxi , arr[i].dead);
     }
     
     vector<int> slot(maxi+1 , -1);
     int profit = 0 ;
     int jobs = 0 ;
     
     for(int i = 0 ; i < n ; i++)
     {
         for(int j = arr[i].dead ; j >0 ; j--)
         {
             if(slot[j] == -1)
             {
                 slot[j] = i ;
                 profit += arr[i].profit ;
                 jobs++;
                 break;
             }
         }
     }
     
     ans.push_back(jobs );
     ans.push_back(profit);
     return ans ;
    } 
};