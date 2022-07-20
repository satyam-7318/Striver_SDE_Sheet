https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/



class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        bool leftToRight = true;
        
        queue<TreeNode*> q;
        
        vector<vector<int>> ans;
        
        if(!root)
            return ans;
        
        q.push(root);
        
        while(!q.empty()){
            
            
            int size = q.size();
            
            vector<int> temp(size);
            
            for(int i=0;i<size;i++){
                
                
                TreeNode* front = q.front();
                q.pop();
                
                int index = leftToRight ? i : size-i-1;
                
                temp[index] = front->val;
                
                if(front->left)
                    q.push(front->left);
                
                if(front->right)
                    q.push(front->right);
                
                
                
            }
            
            ans.push_back(temp);
            leftToRight = !leftToRight;
            
        }
        
        return ans;
        
    }
};
