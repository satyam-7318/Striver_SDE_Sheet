https://www.interviewbit.com/problems/path-to-given-node/



bool f(TreeNode* root, int b , vector<int>& ans){
    
    if(root==NULL)
    return false;
    
    ans.push_back(root->val);
    
    if(root->val==b)
    return true;
    
    
    if(f(root->left,b,ans)||f(root->right,b,ans))
    return true;
    
    ans.pop_back();
    
    return false;
    
    
    
} 
 
 
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    f(A,B,ans);
    return ans;
}
