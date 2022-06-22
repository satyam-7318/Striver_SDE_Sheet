https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int currProfit = 0;
        int mini = INT_MAX;
        
        int curr;
        
        int maxProfit = INT_MIN;
        
        
        for(int i=0;i<n;i++){
            
            curr = prices[i];
            
            mini = min(mini,curr);
            
            currProfit = curr - mini;
            
            maxProfit = max(currProfit , maxProfit);
            
            
        }
        
        return maxProfit;
        
    }
};
