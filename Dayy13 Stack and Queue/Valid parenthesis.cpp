https://leetcode.com/problems/valid-parentheses/



class Solution {
public:
    bool isValid(string s) {
        
        if(s[0]==')' || s[0]=='}' || s[0]==']')
            return false;
        
        
        stack<char> st;
        
        
        int n = s.size();
        
        if(n&1)
            return false;
        
        
        
        
        for(int i=0;i<n;i++){
            
            
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
            
            
            if(s[i]==')'){
                
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
            
            if(s[i]=='}'){
                
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
            
            if(s[i]==']'){
                
                if(!st.empty() && st.top()=='['){
                    st.pop();
                    continue;
                }
                else
                    return false;
            }
            
        }
        
        
        if(st.empty())
            return true;
        else
            return false;
        
        
        
    }
};
