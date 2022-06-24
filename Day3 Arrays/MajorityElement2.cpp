https://leetcode.com/problems/majority-element-ii/

// Method 1 ------> using hashmap

class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        
        map<int,int> mapping;
        vector<int> ans;
        int num=arr.size()/3,count=0;

        for(int i=0;i<arr.size();i++){
            //update the frequency in map and then check
            mapping[arr[i]]++;

            //when frquency becomes more than n/k we add it in ans and make it freuqncy to INT_MIN
            //such that a kind to store the frquency so it again wont add in ans array
        
            if(mapping[arr[i]]>num){
            ans.push_back(arr[i]);
            mapping[arr[i]]=INT_MIN;
            }
       
        }
    
        return ans;
    }
};


// Method 2----------> Moore Voting Algo



class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        
          
        
//         Moore Voting Algo
        
        int n = arr.size();
        vector<int> ans;
        
        int num1 , num2 , cnt1 = 0 , cnt2 = 0;
        
        
        
                for(int i : arr){

                    if(i==num1)
                        cnt1++;
                    else if(i==num2)
                        cnt2++;
                    else if(cnt1==0){
                        num1 = i;
                        cnt1 = 1;
                    }
                    else if(cnt2==0){
                        num2 = i;
                        cnt2 = 1;
                    }
                    else{
                        cnt1--;
                        cnt2--;
                    }


                }

        //arr me check kar lena num1 or num2 counting .... agar inme se kisi ka bhi count < n/3 hua to use hata dena
        
                cnt1=0,cnt2=0;

                for(int i : arr){

                    if(i==num1)
                        cnt1++;

                    if(i==num2)
                        cnt2++;


                }
        
             if(cnt1 > floor(n/3))
                 ans.push_back(num1);
        
        if(cnt2 > floor(n/3))
            ans.push_back(num2);
        
        return ans;
        }
    };
