class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int> queue;
       vector<int> ans;
       for (int left = 0; left < nums.size(); ++left) {
           
           if (queue.front() == left - k) queue.pop_front();
        
           while (!queue.empty() && nums[queue.back()] < nums[left]) 
           queue.pop_back();
           
           queue.push_back(left);
           
           if (left - k + 1 >= 0) ans.push_back(nums[queue.front()]);
       }
       return ans;
   }
};