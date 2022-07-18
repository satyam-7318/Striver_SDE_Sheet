https://leetcode.com/problems/binary-tree-preorder-traversal/



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> pre;
        
        if(root==NULL)
            return pre;
        
        TreeNode* curr = root;
        
        
        while(curr){
            
            if(curr->left==NULL){
                pre.push_back(curr->val);
                curr = curr->right;
            }
            else{
                
                TreeNode* pred = curr->left;
                
                while(pred->right && pred->right!=curr){
                    pred = pred->right;
                }
                
                if(pred->right==NULL){
                    pred->right = curr;
                    pre.push_back(curr->val);
                    curr = curr->left;
                }
                else{
                    pred->right = NULL;
                    curr =  curr->right;
                }
                
                
                
                
            }
            
            
            
            
        }
        
        return pre;
        
    }
};
