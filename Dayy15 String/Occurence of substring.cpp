https://www.codingninjas.com/codestudio/problems/1115738?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0



vector<int> stringMatch(string &str, string &pat) {
    // Write your code here
    int n = str.size();
    int m = pat.size();
    
    int i=0,j=0;
    vector<int> ans;
    string a;
    
    while( j<n ){
        
        a+=str[j];
        
        if(j-i+1<m){
            j++;
        }
        else{
                if(a==pat)
                    ans.push_back(i);
            
                 a = a.substr(1);
                i++;
                j++;
          }
    }
    
  return ans;  
}
