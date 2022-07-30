https://leetcode.com/problems/binary-search-tree-iterator/



class BSTIterator {
public:
    
    stack<TreeNode*> st;
    
    
    BSTIterator(TreeNode* root) {
        
        pushAll(root);
    }
    
    int next() {
        
        TreeNode* top = st.top();
        st.pop();
        
        pushAll(top->right);
        
        
        return top->val;
        
    }
    
    bool hasNext() {
        return !st.empty();
    }
    
    
    void pushAll(TreeNode* root){
        
        while(root){
            st.push(root);
            root=root->left;
        }
        
        
    }
};
