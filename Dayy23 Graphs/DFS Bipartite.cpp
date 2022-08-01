https://leetcode.com/problems/is-graph-bipartite/



class Solution {
public:
    
    
    bool dfs(vector<vector<int>>& graph , vector<int>& col , int node){
        
        
        for(auto& it : graph[node]){
            
            if(col[it]==-1){
                
                col[it] = !col[node];
                
                if(!dfs(graph , col , it))
                    return false;
                
            }
            else if(col[it]==col[node])
                return false;
            
            
        }
        
        
        return true;
        
        
    }
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        
        vector<int> col(n,-1);
        
        
        for(int i=0;i<n;i++){
            
            
            if(col[i]==-1){
                
                col[i] = 1;
                
                if(!dfs(graph , col , i))
                    return false;
                
            }
            
            
            
            
        }
        
        return true;
        
    }
};
