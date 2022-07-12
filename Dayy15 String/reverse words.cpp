https://leetcode.com/problems/reverse-words-in-a-string/



class Solution {
public:
    string reverseWords(string s) {
        
        string word="";
        string ans = "";
        
        
        
        int k = 0;
        
        while(s[k]==' ')
            k++;
        
        s=s.substr(k);
        
        int n = s.size();
        
        int i = n-1;
        
        while(i>=0){
            
            
            if(word.size()>0 && s[i]==' '){
                
                reverse(word.begin(),word.end());
                ans+=word;
                ans+=" ";
                word.clear();
                i--;
                continue;
            }   
                
            if(s[i]==' '){
                i--;
                continue;
            }
            
            word.push_back(s[i]);
            i--;
            
            
        }
       
        reverse(word.begin(),word.end());
        ans+=word;
        
        return ans;
    }
};
