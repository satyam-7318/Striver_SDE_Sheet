https://leetcode.com/problems/binary-tree-preorder-traversal/



class Solution {
public:
    void solve(TreeNode* root , vector<int>& pre){
        
        if(!root)
            return;
        
        
        pre.push_back(root->val);
        solve(root->left,pre);
        solve(root->right,pre);
        
        
        
        
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> pre;
        solve(root,pre);
        return pre;
        
    }
};


// Iterative way

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> pre;
        
        if(root==NULL)
            return pre;
        
        stack<TreeNode*> st;
        
        st.push(root);
        
        
        while(!st.empty()){
            
            
            TreeNode* node = st.top();
            st.pop();
            
            pre.push_back(node->val);
            
            
            if(node->right)
                st.push(node->right);
            
            if(node->left)
                st.push(node->left);
            
            
            
        }
        
        return pre;
        
    }
};
