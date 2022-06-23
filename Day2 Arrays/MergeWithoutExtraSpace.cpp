https://leetcode.com/problems/merge-sorted-array/



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0)
            return;
        
        for(int i=0;i<m;i++){
            
            if(nums1[i]>nums2[0]){
                
                int temp = nums1[i];
                nums1[i] = nums2[0];
                nums2[0] = temp;
                
                sort(nums2.begin(),nums2.end());
                
            }
            
            
        }
        
        int j =0;
        int i = m;
        
        while(j<n){
            
            nums1[i++]=nums2[j++];
    
        }
        
    }
};
