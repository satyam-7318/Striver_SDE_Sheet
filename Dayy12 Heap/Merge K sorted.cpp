https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<k;i++){
        
        for(int j=0;j<kArrays[i].size();j++){
            
            pq.push(kArrays[i][j]);
            
            
        }
        
        
    }
    
    vector<int> ans(0,pq.size());
    
    for(int i=0;i<pq.size();i++){
        
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        
    }
    
    return ans;
    
}
