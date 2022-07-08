https://practice.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1#



bool isPossible(bool graph[101][101],int color[] , int i , int c,int n){
    
    
    for(int k=0;k<n;k++){
        
        
        if(graph[i][k]==1 && color[k]==c)
        return false;
        
    }
    
    return true;
}

bool solve(bool graph[101][101] , int m , int n , int color[] , int i){
    
    if(i==n)
      return true;
    
    for(int c=1;c<=m;c++){
        
        if(isPossible(graph,color,i,c,n)){
          color[i]=c;
          
          if(solve(graph,m,n,color,i+1)) return true;
          
          color[i]=0;
          
        }
    }
    
    return false;
    
}


bool graphColoring(bool graph[101][101], int m, int n) {
    // your code here
    int color[n]={0};
    
    return solve(graph,m,n,color,0);
}
