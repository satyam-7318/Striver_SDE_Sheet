https://leetcode.com/problems/unique-paths/


// Method 1 ---------> Recursion

class Solution {
public:
    
    int unique(int i , int j , int m , int n){
        
        if(i==m-1 && j==n-1)
            return 1;
        
        if(i>=m || j>=n)
            return 0;
        
        
        int ans1 = unique(i+1,j,m,n);
        int ans2 = unique(i,j+1,m,n);
        
        return ans1+ans2;
        
        
        
    }
    
    int uniquePaths(int m, int n) {
        
        return unique(0,0,m,n);
        
    }
};



// Method 2 ----------> DP = recursion + memoization


class Solution {
public:
    int dp[102][102];
    
    int unique(int i , int j , int m , int n){
        
        if(i==m-1 && j==n-1)
            return 1;
        
        if(i>=m || j>=n)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
            
        int ans1 = unique(i+1,j,m,n);
        int ans2 = unique(i,j+1,m,n);
        
        return dp[i][j]=ans1+ans2;
        
        
        
    }
    
    int uniquePaths(int m, int n) {
        
        memset(dp,-1,sizeof(dp));
        
        return unique(0,0,m,n);
        
    }
};


