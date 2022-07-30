https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/



class BST{
    
    public:
    
    bool isBST;
    int sum;
    int maxi;
    int mini;
    
    
    
};

class Solution {
public:
    
    
    BST fun(TreeNode* root , int& s){
        
        if(!root){
            
            BST p;
            
            p.isBST = true;
            p.sum = 0;
            p.maxi = INT_MIN;
            p.mini = INT_MAX;
            
            return p;
            
        }
        
        BST left = fun(root->left , s);
        BST right = fun(root->right , s);
        
        BST ans;
        
        ans.isBST = left.isBST && right.isBST && (root->val > left.maxi) && (root->val < right.mini);
        ans.sum = root->val + left.sum + right.sum;
        ans.mini = min(root->val , min(left.mini , right.mini));
        ans.maxi = max(root->val , max(left.maxi , right.maxi));
        
        if(ans.isBST)
            s = max(s , ans.sum);
        
        return ans;
        
        
        
    }
    
    
    int maxSumBST(TreeNode* root) {
        
        int s = 0;
        BST ans = fun(root , s);
        
        return s;
        
        
    }
};
