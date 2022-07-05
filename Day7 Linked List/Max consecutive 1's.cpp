https://leetcode.com/problems/max-consecutive-ones/



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int cnt = 0;
        int maxi = INT_MIN;
        int i = 0;
        int n = nums.size();
        
        while(i<n){
            
            if(nums[i]==1)
                cnt++;
            else{
                
                maxi = max(cnt , maxi);
                cnt=0;
                
            }
            
            i++;
            
            
        }
        
        maxi = max(maxi,cnt);
        return maxi;
    }
};
