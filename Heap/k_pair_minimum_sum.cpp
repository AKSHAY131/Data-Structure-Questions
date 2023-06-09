Brute Force 

Brute Force -> O(m*n log(m*n)) where m and n are size of nums1 and nums2

	typedef pair<int, pair<int, int>> pi;
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pi> pq;
        vector<vector<int>> ans;
          
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                pq.push({nums1[i]+nums2[j], {nums1[i], nums2[j]}});
                if(pq.size() > k){
                    pq.pop();
                }
            }
        }
        
        while(!pq.empty()){
            vector<int> temp = {pq.top().second.first, pq.top().second.second};
            ans.push_back(temp);
            pq.pop();
        }
        
        return ans;
    }

    optimised 

    Here we have to find K pair of numbers whose sum is the minimum from given 2 sorted array. Observation
is that if we want K pairs of numbers with minimum sum from 2 sorted array the minimum K sums will
always be in the K * K combination of 2 sorted array numbers. We can use MinHeap priority queue to store
the minimum sums, first we add all sums from nums1[0] to nums1[min(n1,K)] with nums2[0], and also index 0
which is the index X of nums2 and the nums1 item to the MinHeap. Each time we get the minimum sum the
next min sum can be nums1 item + nums2[X+1] and so we push it to MinHeap.  

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<vector<int>>res; // result vector
        
        // MinHeap to store min sums
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pQ;
        
        // push all nums1[0] to nums1[min(n1,k)] sum with nums2[0]
        // Min Heap tuple is <sum,nums1 item, nums2 index taken>
        for(int i=0;i<n1 && i<k;i++)pQ.push({nums1[i]+nums2[0],nums1[i],0});
        
        // Run loop k times or queue is empty
        while(k-- && !pQ.empty())
        {
            auto t = pQ.top();  // get min sum tuple
            pQ.pop();
            res.push_back({t[1],nums2[t[2]]});  // push it to result
            
            if(t[2]==n2-1)continue; // nums2 index already at the max range
            
            // if current tuple nums1 item + nums2[nums2 index] gives a min sum
            // then the next min sum can be nums1 item + nums2 [nums2 index +1]
            // as we already added K nums1 items in the Min Heap
            pQ.push({t[1]+nums2[t[2]+1],t[1],t[2]+1});  
        }
        
        return res;
    }
};