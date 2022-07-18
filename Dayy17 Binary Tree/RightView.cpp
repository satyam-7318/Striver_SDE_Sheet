https://leetcode.com/problems/binary-tree-right-side-view/



class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
   // Your code here
    vector<int> ans;
      
      
      if(root==NULL)
      return ans;
      
      
      queue<pair<TreeNode*,int>> q;
      
      map<int,int> m;
      
      q.push({root,0});
      
      
      while(!q.empty()){
          
         
              
              pair<TreeNode* ,int> temp = q.front();
              q.pop();
              
              TreeNode* frontNode = temp.first;
              int lvl = temp.second;
              
              // if(m.find(lvl)==m.end())
              m[lvl]=frontNode->val;
              
              if(frontNode->left)
              q.push({frontNode->left,lvl+1});
              
              
              if(frontNode->right)
              q.push({frontNode->right,lvl+1});
          
      }
      
      
      for(auto i : m)
      ans.push_back(i.second);
      
      
      return ans;
}

        
    
};
