https://leetcode.com/problems/palindrome-partitioning/



class Solution {
public:
    
    bool isPalin(string s){
        
        string k = s;
        reverse(s.begin(),s.end());
        
        return k==s;
    }
  
  
    void solve(string s , vector<string>& ds , vector<vector<string>>& ans){
        
        if(s.size()==0){
            ans.push_back(ds);
            return;
        }
        
        
        for(int i=0;i<s.size();i++){
            
            string k = "";
            
            for(int j=0;j<=i;j++)
                k+=s[j];
            
            if(isPalin(k)){
                ds.push_back(k);
                solve(s.substr(i+1),ds,ans);
                ds.pop_back();
            }
            
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> ds;
        
        solve(s,ds,ans);
        
        return ans;
        
    }
};
