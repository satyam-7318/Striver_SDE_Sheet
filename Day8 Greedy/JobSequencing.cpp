https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#


class Solution {
public:
      static bool cmp(Job &a,Job &b){
       return a.profit>b.profit;
   }
   vector<int> JobScheduling(Job arr[], int n) 
   { 
       // your code here
       vector<int>v;
       if(n==0){
           return v;
       }
       sort(arr,arr+n,cmp);
       int maxi=0;
       for(int i=0;i<n;i++){
           maxi=max(maxi,arr[i].dead);
       }
       int jobprofit=0;
       int jobcount=0;
       vector<int>slot(maxi+1,-1);
       for(int i=0;i<n;i++){
           for(int j=arr[i].dead;j>0;j--){
               if(slot[j]==-1){
                   slot[j]=i;
                   jobprofit+=arr[i].profit;
                   jobcount++;
                   break;
               }
           }
       }
       v.push_back(jobcount);
       v.push_back(jobprofit);
       return v;
   } 
};
