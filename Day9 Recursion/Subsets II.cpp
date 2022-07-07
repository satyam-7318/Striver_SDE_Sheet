https://leetcode.com/problems/subsets-ii/


class Solution {
public:
    
    void f(int i , vector<int>& nums , int n , vector<int>& ds , vector<vector<int>>& ans){
        
        if(i==n){
            ans.push_back(ds);
            return;
        }
        
        
        //pick
        ds.push_back(nums[i]);
        f(i+1,nums,n,ds,ans);
        ds.pop_back();
        
        while(i<n-1 && nums[i]==nums[i+1]) i++;
        
        f(i+1,nums,n,ds,ans);
        
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        int n = nums.size();
        
        vector<int> ds;
        
        sort(nums.begin(),nums.end());
        
        f(0,nums,n,ds,ans);
        
        return ans;
        
    }
};
