https://leetcode.com/problems/sort-colors/




# DUTCH NATIONAL FLAG ALGORITHM

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        
        //Dutch National Flag Algorithm
        
        int n = nums.size();
        
        if(n==1)
            return;
        
        if(n==2){
            
            if(nums[1]<nums[0])
                swap(nums[1],nums[0]);
            
        }
        
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        
        while(mid <= high){
            
            
            if(nums[mid]==0){
                
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                
            }
            else if(nums[mid]==1){
                
                mid++;
                
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
            
        }
        
        
    }
};
