https://practice.geeksforgeeks.org/problems/subset-sums2234/1#



void subsetSums(vector<int> &arr , int n , int sum , vector<int>& ans){
        
        if(n<0){
            ans.push_back(sum);
            return;
        }
        
        sum+=arr[n];
        subsetSums(arr,n-1,sum,ans);
        sum-=arr[n];
        subsetSums(arr,n-1,sum,ans);
        
    }

vector<int> subsetSum(vector<int> &arr)
{
    // Write your code here.
       vector<int> ans;
        int n = arr.size();
        int sum = 0;
        
        subsetSums(arr , n-1 , sum , ans);
        sort(ans.begin(),ans.end());
        return ans;
}
