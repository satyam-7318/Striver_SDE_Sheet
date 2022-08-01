https://leetcode.com/problems/number-of-islands/



class Solution {
public:
    
    void DFS(vector<vector<char>>& grid , int i, int j)
    {   grid[i][j]='0';
        if(i<grid.size()-1 && grid[i+1][j]=='1')
            DFS(grid,i+1,j);
        if(j<grid[0].size()-1 && grid[i][j+1]=='1')
            DFS(grid,i,j+1);
        if(j>0 && grid[i][j-1]=='1')
            DFS(grid,i,j-1);
        if(i>0 && grid[i-1][j]=='1')
            DFS(grid,i-1,j);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    DFS(grid,i,j);
                }
            }
                
        }
        return count;
    }
};