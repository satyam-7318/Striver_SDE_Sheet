https://leetcode.com/problems/two-sum-iv-input-is-a-bst/



class Solution {
public:
    
    void f(TreeNode* root , vector<int>& in){
        
        if(root==NULL)
            return;
        
        
        f(root->left , in);
        in.push_back(root->val);
        f(root->right , in);
        
        
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        
        vector<int> in;
        
        f(root , in);
        
        int i =0;
        int j = in.size()-1;
        
        while(i<j){
            
            int sum = in[i] + in[j];
            
            if(sum==k)
                return true;
            
            if(sum<k)
                i++;
            else
                j--;
            
            
            
        }
        
        
        return false;
        
    }
};
