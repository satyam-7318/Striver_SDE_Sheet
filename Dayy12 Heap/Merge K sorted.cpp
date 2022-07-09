https://www.codingninjas.com/codestudio/problems/merge-k-sorted-arrays_975379?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



// #include<bits/stdc++.h>
// vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
// {
//     // Write your code here.
//     priority_queue<int,vector<int>,greater<int>> pq;
    
//     for(int i=0;i<k;i++){
        
//         for(int j=0;j<kArrays[i].size();j++){
            
//             pq.push(kArrays[i][j]);
            
            
//         }
        
        
//     }
    
//     vector<int> ans(0,pq.size());
    
//     for(int i=0;i<pq.size();i++){
        
//         while(!pq.empty()){
//             ans.push_back(pq.top());
//             pq.pop();
//         }
        
//     }
    
//     return ans;
    
// }



#include<queue>

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    vector<int> result; 
  
    // Create a min heap to store atmost k heap nodes at a time.
    priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >, greater<pair<int, pair<int, int> > > > minHeap; 
  
    for (int i = 0; i < kArrays.size(); i++)
    {
        minHeap.push({ kArrays[i][0], { i, 0 } }); 
    }
  
    while (minHeap.empty() == false) 
    { 
    
        // Remove the minimum element from the heap.
        pair<int, pair<int, int> > curr = minHeap.top(); 
        minHeap.pop(); 
  
        // i is the array number and j is the index of the removed element in the ith array.
        int i = curr.second.first; 
        int j = curr.second.second; 
    
        // Add the removed element to the output array.
        result.push_back(curr.first); 
  
        // If the next element of the extracted element exists, add it to the heap.
        if (j + 1 < kArrays[i].size())
        {
            minHeap.push({ kArrays[i][j + 1], { i, j + 1 } }); 
        }
    } 
  
    // Return the output array.
    return result; 
}

