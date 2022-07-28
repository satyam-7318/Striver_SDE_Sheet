https://leetcode.com/problems/populating-next-right-pointers-in-each-node/



class Solution {
public:
    void levelOrder(Node* root){
        
        
        if(root==NULL)
            return;
        
        
        queue<Node*> q;
        
        
        
        q.push(root);
        
        
        while(!q.empty()){
            
            int size = q.size();
            vector<Node*> v;
            
            for(int i=0;i<size;i++){
                
                Node* front = q.front();
                q.pop();
                
                v.push_back(front);
                
                
                if(front->left)
                    q.push(front->left);
                
                if(front->right)
                    q.push(front->right);
                
            }
            
            for(int i=0;i<v.size()-1;i++){
                
                v[i]->next = v[i+1];
                
                
            }
            
            
        }
        
        
        
        
    }
    
    
    Node* connect(Node* root) {
        
        levelOrder(root);
        
        return root;
        
    }
};
