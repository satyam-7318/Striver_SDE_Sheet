https://leetcode.com/problems/implement-strstr/



class Solution {
public:
    int strStr(string h, string n) {
        
        if(n.size()==0)
            return 0;
        
        int k = n.size();
        
        int i=0,j=0;
        
        int l = h.size();
        
        string s;
        
        while(j<l){
            
            
            s.push_back(h[j]);
            
            if(j-i+1<k){
                j++;
            }
            else{
                
                
                if(s==n)
                    return i;
                
                s = s.substr(1);
                
                i++;
                j++;
                
                
            }
            
        }
        
        return -1;
        
    }
};
