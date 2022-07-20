https://leetcode.com/problems/balanced-binary-tree/



class Solution {
public:
    
    pair<bool,int> f(TreeNode* root){
        
        
        if(root==NULL){
            pair<bool,int> p = {true,0};
            return p;
        }
        
        
        pair<bool,int> left = f(root->left);
        pair<bool,int> right = f(root->right);
        
        
        bool op1 = left.first;
        bool op2 = right.first;
        bool op3 = abs(left.second - right.second) <= 1;
        
        pair<bool,int> ans;
        
        ans.first = op1 && op2 && op3;
        ans.second = 1 + max(left.second , right.second);
        
        return ans;
        
    }
    
    bool isBalanced(TreeNode* root) {
        
        return f(root).first;
        
    }
};
