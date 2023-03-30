
class Solution {
private :
    TreeNode *binarysearch(vector<int>& nums , int left , int right )
    {
        if(left > right)
            return NULL;
        
        int mid = left + (right - left)/ 2;
        
        TreeNode *root = new TreeNode(nums[mid]);
        
        root->left = binarysearch(nums , left , mid-1);
        root->right =binarysearch(nums , mid+1, right);
        
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        return binarysearch(nums , 0 , n-1);    
    }
};