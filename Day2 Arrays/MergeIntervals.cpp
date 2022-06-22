https://leetcode.com/problems/merge-intervals/


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        int n = intervals.size();
        
        vector<vector<int>> ans;
        
        if(intervals.size()==0)
            return ans;
        
        sort(intervals.begin(),intervals.end());
        
        vector<int> temp = intervals[0];
        
        for(int i=0;i<n;i++){
            
            if(temp[1]>=intervals[i][0])
                temp[1]=max(temp[1],intervals[i][1]);
            else{
                ans.push_back(temp);
                temp = intervals[i];
            }
            
        }
        
        ans.push_back(temp);
        
        return ans;
    }
};
