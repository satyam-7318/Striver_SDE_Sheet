https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#



class Solution{
    public:
    
    bool isPossible(int i , int j , vector<vector<int>> &m  , int n , vector<vector<int>> &vis){
        
        
        if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0 || vis[i][j]==1)
        return false;
        
        return true;
    }
    
    void solve(vector<vector<int>> &m , int n , vector<string>& ans , string s , int i , int j, vector<vector<int>> &vis){
        
        
        if(i==n-1 && j==n-1){
            ans.push_back(s);
            return;
        }
        
        if(isPossible(i+1,j,m,n,vis)){
            vis[i][j]=1;
            solve(m,n,ans,s+"D",i+1,j,vis);
            vis[i][j]=0;
        }
        
        
        if(isPossible(i,j-1,m,n,vis)){
            vis[i][j]=1;
            solve(m,n,ans,s+"L",i,j-1,vis);
            vis[i][j]=0;
        }
        
        if(isPossible(i,j+1,m,n,vis)){
            vis[i][j]=1;
            solve(m,n,ans,s+"R",i,j+1,vis);
            vis[i][j]=0;
        }
        
        if(isPossible(i-1,j,m,n,vis)){
            vis[i][j]=1;
            solve(m,n,ans,s+"U",i-1,j,vis);
            vis[i][j]=0;
        }
        
        
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0)
        return ans;
        
        
        string s = "";
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        solve(m,n,ans,s,0,0,vis);
        
        
        return ans;
        
        
    }
};
