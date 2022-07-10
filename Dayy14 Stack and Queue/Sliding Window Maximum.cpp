https://leetcode.com/problems/sliding-window-maximum/



class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int i=0,j=0;
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;
        
        while(j<n){
            
            while(dq.size()>0 && dq.back() < nums[j])
                dq.pop_back();
            
            dq.push_back(nums[j]);
            
            if(j-i+1<k)
                j++;
            else if(j-i+1==k){
                
                
                ans.push_back(dq.front());
                
                if(nums[i]==dq.front())
                    dq.pop_front();
                
                i++;
                j++;
                
            }
            
        }
        
        return ans;
    }
};
