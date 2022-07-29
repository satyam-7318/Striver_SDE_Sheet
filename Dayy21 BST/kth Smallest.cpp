https://leetcode.com/problems/kth-smallest-element-in-a-bst/



class Solution {
public:
    
    void f(TreeNode* root, int& i , int k , int& ans){
        
        
        if(root==NULL)
            return;
        
        
        
        f(root->left , i , k , ans);
        
        i++;
        
        if(i==k){
            ans = root->val;
        }
        
        if(ans==-1)
            f(root->right , i , k , ans);
        
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        int ans = -1;
        int i = 0;
        f(root , i , k , ans);
        return ans;
        
        
    }
};
