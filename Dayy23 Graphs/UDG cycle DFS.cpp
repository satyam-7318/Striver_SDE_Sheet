https://www.codingninjas.com/codestudio/problems/1062670?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



#include<bits/stdc++.h>
bool dfs(map<int,vector<int>>& adj , map<int,bool>& visited , int node , int parent){
    visited[node] = true;
    
    for(auto& i : adj[node]){
        
        if(!visited[i]){
            if(dfs(adj , visited , i , node))
                return true;
        }
        else if(i != parent)
            return  true;
    }
    
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    map<int,vector<int>> adj;
    
    for(int i=0;i<m;i++){
        
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    
    map<int,bool> visited;
    
    for(int i=0;i<n;i++){
        
        if(!visited[i]){
            if(dfs(adj,visited,i,-1)){
                return "Yes";
            }
        }
        
        
    }
    
    
    return "No";
}
