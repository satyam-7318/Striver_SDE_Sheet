https://leetcode.com/problems/largest-rectangle-in-histogram/



class Solution {
public:
    
    void leftSmall(vector<int>& h ,vector<int>& ls){
        
        int n = h.size();
        
        stack<int> s;
        
        
        for(int i=0;i<n;i++){
            
            while(!s.empty() && h[s.top()] >= h[i] )
            s.pop();
            
            
            if(s.empty())
                ls[i]=-1;
            else
                ls[i]=s.top();
                
            s.push(i);
            
        }
        
        
    }
    
    
    
    void rightSmall(vector<int>& h ,vector<int>& rs){
        
        int n = h.size();
        
        stack<int> s;
        
        
        for(int i=n-1;i>=0;i--){
            
            while(!s.empty() && h[s.top()] >= h[i] )
            s.pop();
            
            
            if(s.empty())
                rs[i]=n;
            else
                rs[i]=s.top();
                
            s.push(i);
            
        }
        
        
    }
    
    
    
    int largestRectangleArea(vector<int>& h) {
        
        int n = h.size();
        
        vector<int> ls(n,-1);
        vector<int> rs(n,-1);
        
        leftSmall(h,ls);
        rightSmall(h,rs);
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++){
            
            
            int ans = h[i]*(rs[i]-ls[i]-1);
            maxi = max(maxi,ans);
            
        }
        
        return maxi;
        
    }
};
