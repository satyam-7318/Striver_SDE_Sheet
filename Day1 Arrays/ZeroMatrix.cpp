https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    
//     void setRowCol(vector<vector<int>>& matrix , int row , int col){
        
//         int m = matrix.size();
//         int n = matrix[0].size();
        
//         int i =0;
        
//         //row zero kar dena
        
//         while(i<n){
            
//             matrix[row][i++]=0;
        
//         }
        
//         i=0;
        
//         //col zero kar dena
        
//         while(i<m){
            
//             matrix[i++][col]=0;
        
//         }
        
        
        
    // }
    
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        bool col = true;
        
        // vector<pair<int,int>> v;
        
        for(int i=0;i<m;i++){
            
            if(matrix[i][0]==0)
                    col=false;
            
            
            for(int j=1;j<n;j++){
                
                
                
                if(matrix[i][j]==0){
                    
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
                
            }
            
        }
        
        
        for(int i=m-1;i>=0;i--){
            
            for(int j=n-1;j>=1;j--){
                
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
                
               
                
            }
            
             if(col==false)
                    matrix[i][0]=0;
                
            
        }
        
        
//         for(auto i : v){
            
//             setRowCol(matrix , i.first , i.second);
            
//         }
        
    }
};

