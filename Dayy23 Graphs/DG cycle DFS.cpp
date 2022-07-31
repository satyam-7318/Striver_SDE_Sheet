https://leetcode.com/problems/course-schedule/



class Solution {
public:
    
    bool cycleDFS(vector<vector<int>>& adj , vector<bool>& vis , int node , vector<bool> dfsvis){
        
        vis[node] = true;
        dfsvis[node] = true;
        
        
        for(auto& i : adj[node]){
            
            if(!vis[i]){
                
                if(cycleDFS(adj , vis , i , dfsvis))
                    return true;
                
            }
            else if(dfsvis[i])
                return true;
            
        }
        
        dfsvis[node] = false;
        return false;
        
        
        
    }
    
    bool canFinish(int n , vector<vector<int>>& p) {
        
        vector<bool> visited(n , false);
        vector<bool> dfsvisited(n , false);
        
        vector<vector<int>> adj(n);
        
        
        for(auto& i : p){
            
            
            int u = i[0];
            int v = i[1];
            
            // adj[v].push_back(u);
            adj[u].push_back(v);
            
            
        }
        
        
        for(int i=0;i<n;i++){
            
            if(!visited[i]){
                
                if(cycleDFS(adj , visited , i , dfsvisited))
                    return false;
                
            }
            
            
        }
        
        return true;
        
        
    }
};
