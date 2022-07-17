https://leetcode.com/problems/count-and-say/



class Solution {
public:
    
    string ans(int n){
        
        
        if(n==1)
            return "1";
        
        if(n==2)
            return "11";
        
        if(n==3)
            return "21";
        
        
        string s = ans(n-1);
        
        int cnt = 0;
        
        string temp="";
        
        for(int i=0;i<s.size();i++){
            
            if(i+1<s.size() && s[i]==s[i+1]){
                cnt++;
                continue;
            }
            
            char c = cnt+1+'0';
            
            temp.push_back(c);
            temp.push_back(s[i]);
            cnt = 0;
            
        }
        
        return temp;
    }
    
    
    string countAndSay(int n) {
        
        return ans(n); 
        
    }
};
