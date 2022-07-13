https://leetcode.com/problems/longest-common-prefix/



class Solution {
public:
//     static bool cmp(string a , string b){
        
//         if(a.size()<b.size())
//             return true;
        
//         return false;
        
//     }
    
    
//     string longestCommonPrefix(vector<string>& strs) {
        
//         sort(strs.begin(),strs.end(),cmp);
        
//         string pref = strs[0];
//         int n = pref.size();
        
//         int i = n;
        
//         while(i>0){
            
//             bool found = true;
//             string match = pref.substr(0,i);
            
//             for(int j=1;j<strs.size();j++){
                
                
//                 if(strs[j].find(match)==0)
//                     continue;
//                 else{
//                     found = false;
//                     break;
//                 }
                
                
//             }
            
//             if(found)
//                 return match;
            
//             i--;
            
//         }
        
//         return "";
        
//     }
    
    
    
    string longestCommonPrefix(vector<string>& strs) {
        string emp="";
        int n=strs.size();
        
        if(strs.size()==0)
            return emp;
        
        if(strs.size()==1)
            return strs[0];
        
        if (strs[0].size() == 0) 
            return emp;
        
        string ans=strs[0];
        
        for(int i=1;i<n;i++){
            int j=0;
            string s=strs[i];
            
            while(j<s.size() && ans[j]==s[j])
                j++;
            
            
            ans=ans.substr(0,j);
        }
        
        return ans;
    }
    
};
