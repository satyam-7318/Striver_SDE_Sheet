https://www.codingninjas.com/codestudio/problems/1062670?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



#include<bits/stdc++.h>
bool bfs(map<int,vector<int>>& adj , map<int,bool>& visited , int node){
    
    map<int,int> parent;
    visited[node]=true;
    parent[node]=-1;
    queue<int> q;
    q.push(node);
    
    
    while(!q.empty()){
        
        int front = q.front();
        q.pop();
        
        for(auto i : adj[front]){
            
            if(visited[i] && i != parent[front]){
                return true;
            }
            else if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i] = front;
            }
            
        }
        
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
            if(bfs(adj,visited,i)){
                return "Yes";
            }
        }
        
        
    }
    
    
    return "No";
}
