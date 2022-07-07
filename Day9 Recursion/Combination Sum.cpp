https://leetcode.com/problems/combination-sum/

class Solution {
public:
    
    void solve(int i , vector<int>& nums , int tar , int n , vector<int>& ds , vector<vector<int>>& ans ){
        
        
        if(tar<0)
            return;
        
        if(tar==0){
            ans.push_back(ds);
            return;
        }
        
        if(i==n)
            return;
        
        //pick
        ds.push_back(nums[i]);
        // tar = tar-nums[i];
        solve(i,nums,tar-nums[i],n,ds,ans);
        ds.pop_back();
        // tar = tar+nums[i];
        
        solve(i+1,nums,tar,n,ds,ans);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        int n = nums.size();
        
        solve(0,nums,target,n,ds,ans);
        
        return ans;
        
    }
};
