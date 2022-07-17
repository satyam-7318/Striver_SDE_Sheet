https://leetcode.com/problems/binary-tree-inorder-traversal/



class Solution {
public:
    
    void f(TreeNode* root , vector<int>& in){
        
        
        if(!root)
            return ;
        
        
        f(root->left,in);
        in.push_back(root->val);
        f(root->right,in);
        
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> in;
        f(root , in);
        return in;
        
    }
};


//  Iterative



class Solution {
public:
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> in;
       
        stack<TreeNode*> s;
      
        
        while(true){
            
            if(root){
                s.push(root);
                root = root->left;
            }
            else{
                
                if(s.empty())
                    break;
                
                root = s.top();
                s.pop();
                
                in.push_back(root->val);
                
                root = root->right;
                
                
            }
            
            
        }
        
        return in;
        
    }
};
