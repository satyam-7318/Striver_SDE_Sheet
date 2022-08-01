https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1




class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>visited(v,0);
       vector<int>res;
       queue<int>q;
       visited[0]=1;
       q.push(0);
       while(!q.empty()){
           int node=q.front();
           q.pop();
           res.push_back(node);
           
           for(int x:adj[node]){
               if(visited[x]==0){
                   visited[x]=1;
                   q.push(x);
               }
           }
       }
       return res;
    }
};

