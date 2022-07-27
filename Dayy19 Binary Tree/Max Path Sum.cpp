https://leetcode.com/problems/binary-tree-maximum-path-sum/



class Solution {
public:
    
    int f(TreeNode* root , int& maxi){
        
        
        if(root==NULL)
            return 0;
        
        int ls = f(root->left , maxi);
        int rs = f(root->right , maxi);
        
        
        int temp=max(max(ls,rs)+root->val,root->val);
        int ans=max(temp,ls+rs+root->val);
        maxi=max(maxi,ans);
        
        return temp;
        
        
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        int temp = root->val;
        
        int ans = f(root,temp);
        
        return temp;
        
    }
};
