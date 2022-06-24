  https://www.codingninjas.com/codestudio/problems/count-inversions_615?leftPanelTab=0


// Merge Sort k code me slight change


#include <bits/stdc++.h> 

void merge(long long* arr , long long l , long long mid, long long r , long long& inv , long long* temp){
    
    int i = l;
    int j = mid;
    int k = l;
    
    
    while(i<=mid-1 && j<=r){
        
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];  
        }
        else{
            temp[k++] = arr[j++];
              inv = inv + mid-i;
        }
      
        
    }
    
    while(i<=mid-1){
        temp[k++] = arr[i++];
    }
    
    while(j<=r){
        temp[k++] = arr[j++];
    }
    
    for(int i = l; i<=r;i++){
        arr[i] = temp[i];
    }
    
}

void mergeSort(long long* arr  , long long l , long long r , long long& inv , long long* temp){
    
    if(r > l){
         long long mid = l+(r-l)/2;
        
        
        mergeSort(arr,l,mid,inv ,temp);
        mergeSort(arr,mid+1,r,inv,temp);
        
        merge(arr,l,mid+1,r,inv,temp);
        
    }
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long  left = 0;
    long long right = n-1;
    
    long long inversion = 0;
    
    long long temp[n];
    
    mergeSort(arr,left,right,inversion,temp);
    
    return inversion;
    
}
