https://leetcode.com/problems/binary-tree-postorder-traversal/



class Solution {
public:
    void solve(TreeNode* root , vector<int>& post){
        
        if(root==NULL)
            return;
        
        
        solve(root->left,post);
        solve(root->right,post);
        
        post.push_back(root->val);
        
        
        
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> post;
        
        if(root==NULL)
            return post;
        
        solve(root , post);
        
        return post;
        
    }
};


// Iterative Way


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> post;
        
        
        if(!root)
            return post;
        
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        
        
        s1.push(root);
        
        while(!s1.empty()){
            
            TreeNode* node = s1.top();
            s1.pop();
            
            s2.push(node);
            
            if(node->left) s1.push(node->left);
            
            if(node->right) s1.push(node->right);
            
            
        }
        
        while(!s2.empty()){
            
            post.push_back(s2.top()->val);
            s2.pop();
            
            
        }
        
        return post;
        
    }
};
