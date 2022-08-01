https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1



class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int i , vector<int> adj[] , vector<int>& ans , vector<int>& vis){
        
        
        ans.push_back(i);
        vis[i] = 1;
        
        for(auto j : adj[i]){
            
            if(!vis[j]){
                
                dfs(j , adj , ans , vis);
                
            }
        }
    }
    
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        
        
        vector<int> vis(v,0);
        vector<int> ans;
        
        for(int i=0;i<v;i++){
            
            if(!vis[i])
              dfs(i , adj , ans , vis);
            
        }
        
        return ans;
    }
};

