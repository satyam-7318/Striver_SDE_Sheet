# ONLY FOR DAG (DIRECTED ACYCLIC GRAPH)
# u --> v ordering

https://practice.geeksforgeeks.org/problems/topological-sort/1



class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	
	void dfs(vector<int> adj[] , vector<bool>& vis , stack<int>& s , int node){
	    
	    vis[node] = true;
	    
	    
	    
	    for(auto& i : adj[node]){
	        
	        if(!vis[i])
	          dfs(adj , vis , s , i);
	        
	    }
	    
	    
	    
	    s.push(node);
	    
	}
	
	
	
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    // code here
	    vector<bool> vis(v,false);
	    stack<int> s;
	    vector<int> ans;
	    
	    for(int i=0;i<v;i++){
	        
	        if(!vis[i]){
	            
	            dfs(adj , vis , s , i);
	            
	        }
	        
	        
	    }
	    
	    while(!s.empty()){
	        
	        ans.push_back(s.top());
	        s.pop();
	        
	    }
	    
	    return ans;
	    
	}
};
