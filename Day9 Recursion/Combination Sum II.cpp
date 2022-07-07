https://leetcode.com/problems/combination-sum-ii/



class Solution {
public:
    
    void combination(vector<int>& arr , int target, vector<int>& ds, vector<vector<int>>& ans , int i){
       
        
        if(target<0)
            return;
        
        if(i==arr.size()){
            
            if(target==0)
            ans.push_back(ds);
            
            return;
        }
        
        if(target==0){
            
            ans.push_back(ds);
            return;
            
        }
        
        
            
                ds.push_back(arr[i]);
                combination(arr,target-arr[i],ds,ans,i+1);
                ds.pop_back();
                
            while(i+1<arr.size() && arr[i]==arr[i+1])
                i++;
        
        combination(arr,target,ds,ans,i+1);
        
    }
    
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        combination(candidates,target,ds,ans,0);
        
        return ans;
        
    }
};
