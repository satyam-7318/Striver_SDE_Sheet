https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
        set<int> s;
        int cnt=0;
        int maxcnt = INT_MIN;
        
        for(auto i : nums){
            s.insert(i);
        }
        
        
        for(auto i : nums){
            
            
            if(s.find(i-1)!=s.end())
                continue;
            else{
                
                int num = i;
                
                
                while(s.find(num)!=s.end()){
                    cnt++;
                    num++;
                }
                
                maxcnt = max(cnt,maxcnt);
                cnt = 0;
                
            }
            
            
            
        }
        
        return maxcnt;
    
    }
};
