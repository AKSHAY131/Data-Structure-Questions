class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here
        int n = arr.size() ;
        bool t[n+1][sum+1];
        
        for(int j = 1 ; j <= sum ; j++)
          t[0][j] = false ;
         
        for (int i =0 ; i <= n ; i++)
          t[i][0] = true;
          
         for(int i = 1 ; i< n+1 ; i++)
           for(int j = 1 ; j < sum+1 ; j++)
            {
                if(arr[i-1] <= j)
                t[i][j] = t[i-1][j-arr[i-1]] or t[i-1][j];
                
                else
                t[i][j] = t[i-1][j];
            }
            return t[n][sum];
    }
};