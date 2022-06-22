https://leetcode.com/problems/next-permutation/




class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        //sabse pahle kya karo ki tum array ko peeche se traverse karna chalu kar do iske baaad jab prev element tumhara less than ho current element se to fir ruk jao or fir currnet element se lekar last tak ka vector sort kar do iske baad jo prev element se just bada element ho us sorted part me, usko swap kar do prev element k sath.......... vahi vector tumhara ans hoga
        
        int n = nums.size();
        
        bool swapped = false;
        
        if(n==1)
            return;
        
        
        
        for(int i = n-1 ; i>0 ; i--){
            
            if(nums[i-1]<nums[i]){
                
                int swapp = i-1;
                
                swapped = true;
                
                sort(nums.begin()+i,nums.end());
                                
                
                
                while(i<n){
                    
                    if(nums[swapp]<nums[i]){
                        swap(nums[swapp],nums[i]);
                        break;
                    }
                    i++;
                }
             
                break;
            }
            
            
            
        }
        
        if(!swapped)
            sort(nums.begin(),nums.end());
        
    }
    
    // ek or way hai ....... sabse pahle array ko traverse karo peeche se, uske baad jo first decreasing element mile vaha ruk jaao , fir uske baad vale array me just bada element search kar lo or un dono ko swap kar lo , iske baad us array ko reverse kar do.... decresing element index k baad wale array ko
};
