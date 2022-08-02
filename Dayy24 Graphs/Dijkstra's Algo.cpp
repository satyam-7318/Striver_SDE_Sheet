https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1



class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> minh;
        
        vector<int> dis(v , INT_MAX);
        
        dis[s] = 0;
        
        minh.push({0,s});
        
        
        while(!minh.empty()){
            
            
            pair<int,int> top = minh.top();
            minh.pop();
            
            int node = top.second;
            int distance = top.first;
            
            
            for(auto it : adj[node]){
                
                
                if(distance + it[1] < dis[it[0]]){
                    
                    dis[it[0]] = distance + it[1];
                    minh.push({dis[it[0]] , it[0]});
                    
                    
                }
                
                
                
                
            }
            
            
        }
        
        return dis;
        
        
    }
};


