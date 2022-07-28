https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/



class Solution {
public:
    
    TreeNode* f(vector<int>& nums , int i , int j){
        
        if(i>j)
            return NULL;
        
        int mid = i + (j-i)/2;
        
        
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = f(nums, i , mid-1);
        root->right = f(nums , mid+1 , j);
        
        return root;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        
        return f(nums , 0 , n-1);
        
    }
};
