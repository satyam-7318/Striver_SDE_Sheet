https://leetcode.com/problems/flood-fill/



class Solution {
public:
    
    void dfs(vector<vector<int>>& m, int r, int c, int oc , int nc){
        
        if(m[r][c]==oc){
            
            m[r][c] = nc;
            
            if(r>0)
                dfs(m,r-1,c,oc,nc);
            
            if(c>0)
                dfs(m,r,c-1,oc,nc);
            
            if(r<m.size()-1)
                dfs(m,r+1,c,oc,nc);
            
            if(c<m[0].size()-1)
                dfs(m,r,c+1,oc,nc);
            
        }
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int c = image[sr][sc];
        
        if(c!=color)
            dfs(image , sr , sc , c , color);
        
        return image;
        
    }
};
