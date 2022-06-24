https://leetcode.com/problems/majority-element/


// Moore Voting Algo


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // we can use hashmap
        
        //method 2 ----> Moore Voting Algo
        
        int cnt = 0;
        int ele = -1;
        
        for(int i=0;i<nums.size();i++){
            
            
            if(cnt==0){
                ele = nums[i];
            }
            
            if(ele==nums[i])
                cnt++;
            else
                cnt--;
            
        }
        
        return ele;
    }
};
