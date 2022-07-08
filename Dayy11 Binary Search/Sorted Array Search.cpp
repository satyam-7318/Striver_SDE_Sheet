https://leetcode.com/problems/search-in-rotated-sorted-array/


class Solution {
public:
    
    int bs(vector<int>& nums , int s , int e , int t){
        
        
        while(s<=e){
            
            int mid = s+(e-s)/2;
            
            
            if(nums[mid]==t)
                return mid;
            else if(nums[mid]<t)
                s=mid+1;
            else
                e=mid-1;
            
        }
        
        return -1;
        
        
    }
    
    int pivotIndex(vector<int>& nums){
        
        
         int first=0;
        int n=nums.size();
        int last = n-1;
        int middle=0,prev=0,next=0;
        while (first<=last)
        {
            if (nums[first]<=nums[last])
            {
                return first;
            }
            middle= first + (last-first)/2;
            prev = ( middle - 1 + n ) % n;
            next = ( middle +1 ) % n;
            
            if (nums[middle] <= nums[next] && nums[middle] <= nums[prev])
            {
                return middle;
            }
            else if (nums[first] <= nums[middle])
            {
                first = middle + 1;
            }
            else if (nums[middle] <= nums[last])
            {
                last= middle-1;
            }
        }
        return -1 ; 
    }
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int Pi = pivotIndex(nums);
        
        if(nums[Pi]==target)
            return Pi;
        
        int ans1 = bs(nums , 0 , Pi , target);
        int ans2 = bs(nums , Pi+1 , n-1 , target);
        
        if(ans1==-1)
            return ans2;
        
        
        return ans1;
    }
};
