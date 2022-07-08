https://leetcode.com/problems/n-queens/



class Solution {
public:
    
    bool isSafe(int r , int c , vector<string>& ds , int n){
        
        
        int row = r;
        int col = c;
        
        //column check
        
        for(int i=row;i>=0;i--){
            
            if(ds[i][col]=='Q')
                return false;
            
        }
        
        //left upper diagonal check
        
        row = r;
        
        for(int i=row , j=col;i>=0 && j>=0; i--,j--){
            
            if(ds[i][j]=='Q')
                return false;
            
        }
        
        row = r;
        col = c;
        
        for(int i=row , j=col;i>=0 && j<n; i--,j++){
            
            if(ds[i][j]=='Q')
                return false;
            
        }
        
        return true;
        
    }
    
    
    void solve(vector<vector<string>>& ans , vector<string>& ds , int n , int r){
        
        if(r==n){
            ans.push_back(ds);
            return;
        }
            
        for(int c=0;c<n;c++){
            
            if(isSafe(r,c,ds,n)){
                ds[r][c]='Q';
                solve(ans,ds,n,r+1);
                ds[r][c]='.';
            }
            
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        
        vector<string> ds(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            ds[i] = s; 
        }
        
        solve(ans,ds,n,0);
        
        return ans;
        
    }
};
