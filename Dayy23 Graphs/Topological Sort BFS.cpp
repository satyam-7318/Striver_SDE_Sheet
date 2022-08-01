https://www.codingninjas.com/codestudio/problems/982938?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website



//Using Kahn's Algo

#include<bits/stdc++.h>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    
    
    //adjaceny list banao
    
    unordered_map<int,vector<int>> adj;
    
    for(int i=0;i<e;i++){
        
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
     
    }
    
    //indegree array bana lo
    
    vector<int> indegree(v);
    
    for(auto i : adj){
        
        for(auto j : i.second){
            
            indegree[j]++;
            
        }
        
    }
    
    // 0 indegree vale ko queue me push kar do
    
    queue<int> q;
    vector<int> ans;
    
    for(int i=0;i<v;i++){
        
        if(indegree[i]==0)
            q.push(i);
    }
    
    
    // do BFS
    
    while(!q.empty()){
        
        int front = q.front();
        q.pop();
        
        ans.push_back(front);
        
        //neighbours ki indegree kam kar do or unme se jinki indegree 0 ho jaye unhe fir se push kar do queue me 
        
        for(auto neighbours : adj[front]){
            
            indegree[neighbours]--;
            
            if(indegree[neighbours] == 0)
                q.push(neighbours);
            
        }
      
    }
    
    return ans;
}
