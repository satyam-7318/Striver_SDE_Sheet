https://www.codingninjas.com/codestudio/problems/1062626?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



#include<bits/stdc++.h>
int detectCycleInDirectedGraph(int v, vector < pair < int, int >> & edges) {
  // Write your code here.
     
    unordered_map<int,vector<int>> adj;
    int e = edges.size();
    for(int i=0;i<e;i++){
        
        int u = edges[i].first-1;
        int v = edges[i].second-1;
        
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
//     vector<int> ans;
    
    for(int i=0;i<v;i++){
        
        if(indegree[i]==0)
            q.push(i);
    }
    
    
    // do BFS
    
    int cnt = 0;
    
    while(!q.empty()){
        
        int front = q.front();
        q.pop();
        cnt++;
//         ans.push_back(front);
        
        //neighbours ki indegree kam kar do or unme se jinki indegree 0 ho jaye unhe fir se push kar do queue me 
        
        for(auto neighbours : adj[front]){
            
            indegree[neighbours]--;
            
            if(indegree[neighbours] == 0)
                q.push(neighbours);
            
        }
      
    }
    
    if(cnt==v)
        return 0;
    else 
        return 1;
    
}
