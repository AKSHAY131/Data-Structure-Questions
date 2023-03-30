class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size() ;
        vector<int>ans;
        priority_queue<pair<int ,int>> q ;
        
        for(int i = 0 ; i < n ; i++)
        {
            q.push({abs(arr[i] - x) , arr[i]});
            
            if(q.size() > k)
                q.pop() ;
        }
        while(!q.empty())
        {
            auto p = q.top();
            q.pop() ;
            ans.push_back(p.second);
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};