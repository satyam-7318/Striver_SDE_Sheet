https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/



class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(!root)
            return ans;
        
         map<int, map<int, multiset<int>>> m;
        
        queue<pair<TreeNode*,pair<int, int>>> q;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            
            auto it = q.front();
            q.pop();
            
            TreeNode* node = it.first;
            int line = it.second.first;
            int lvl = it.second.second;
            
            m[line][lvl].insert(node->val);
            
            if(node->left)
                q.push({node->left,{line-1 , lvl+1}});
            
            if(node->right)
                q.push({node->right,{line+1 , lvl+1}});
                
            
        }
        
        for(auto it : m){
            
            vector<int> v;
            
            for(auto i : it.second){
                v.insert(v.end(), i.second.begin(), i.second.end());
            }
           
            ans.push_back(v);
        }
        
        return ans;
    }
};
