https://leetcode.com/problems/binary-tree-inorder-traversal/



class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> in;
        
        if(root==NULL)
            return in;
        
        TreeNode* curr = root;
        
        
        while(curr){
            
            if(curr->left==NULL){
                
                in.push_back(curr->val);
                curr = curr->right;
                
                
            }
            else{
                
                TreeNode* pred = curr->left;
                
                while(pred->right && pred->right!=curr){
                    pred = pred->right;
                }
                
                if(pred->right==NULL){
                    pred->right = curr;
                    curr = curr->left;
                }
                else{
                    
                    pred->right = NULL;
                    in.push_back(curr->val);
                    curr = curr->right;
                    
                }
                
            }
            
        }
        
        return in;
    }
};
