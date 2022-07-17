https://leetcode.com/problems/valid-anagram/


class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        
        if(s.size()!=t.size())
            return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int n = s.size();
        
        
        int i=0;
        
        while(i<n){
            
            
            if(s[i]!=t[i])
                return false;
            
            
            i++;
            
        }
        
        return true;
        
    }
};
