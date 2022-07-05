https://leetcode.com/problems/remove-duplicates-from-sorted-array/



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        if(nums.size()==0)
            return 0;
        int index=0;
        
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]!=nums[index]){
                index++;
                nums[index]=nums[i];
            }
        }
        
        return index+1;
        
    }
};
