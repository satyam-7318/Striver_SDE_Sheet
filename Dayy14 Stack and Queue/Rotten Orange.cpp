https://leetcode.com/problems/rotting-oranges/



class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        
        if(grid.size()==0)
            return 0;
        
        int total=0;
        int rotten=0;
        
        queue<pair<int,int>> q;
        
        int timee=0;
        
        int m = grid.size();
        int n = grid[0].size();
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                
                if(grid[i][j]!=0)
                    total++;
                
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                
            }
        }
        
        
        while(!q.empty()){
            
            int size = q.size();
            rotten+=size;
            
            for(int i=0;i<size;i++){
                
                auto it = q.front();
                q.pop();
                int r = it.first;
                int c = it.second;
                
                if(r+1<m and grid[r+1][c]==1){
                    grid[r+1][c]=2;
                    q.push({r+1,c});
                }
                
                if(r-1>=0 and grid[r-1][c]==1){
                    grid[r-1][c]=2;
                    q.push({r-1,c});
                }
                
                
                if(c+1<n and grid[r][c+1]==1){
                    grid[r][c+1]=2;
                    q.push({r,c+1});
                }
                
                if(c-1>=0 and grid[r][c-1]==1){
                    grid[r][c-1]=2;
                    q.push({r,c-1});
                }
                
                
            }
            
            if(!q.empty())
               timee++;
            
        }
        

        if(total==rotten)
            return timee;
        
        return -1;
        
        
        
    }
};
