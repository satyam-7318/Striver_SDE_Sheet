https://www.interviewbit.com/problems/nearest-smaller-element/



vector<int> Solution::prevSmaller(vector<int> &A) {
    
    int n = A.size();
    stack<int> s;
    vector<int> ans;
    
    
    for(int i=0;i<n;i++){
        
        while(!s.empty() && s.top() >= A[i]){
            s.pop();
        }
        
        if(s.empty())
        ans.push_back(-1);
        else
        ans.push_back(s.top());
        
        
        s.push(A[i]);
        
    }
    
    return ans;
}
