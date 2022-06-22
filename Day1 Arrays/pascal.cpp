https://leetcode.com/problems/pascals-triangle/



class Solution {
public:
    
    vector<int> pascal(int n){
         
        vector<int> ans(n,0);
        
        int col = n-1;
        
        ans[0]=1;
        
        for(int i=1;i<n;i++){
            
            ans[i] = (ans[i-1]*col)/i;
            
            col--;
            
        }
        
        
        return ans;
    }
    
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> v;
        
        
        for(int i=1;i<=n;i++){
            
            v.push_back(pascal(i));
            
            
        }
        
        
        return v;
        
    }
};
