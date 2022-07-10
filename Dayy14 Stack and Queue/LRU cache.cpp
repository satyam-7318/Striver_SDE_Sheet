https://leetcode.com/problems/lru-cache/


class LRUCache {
public:
    
    class node{
        
        public:
        int key ;
        int val ;
        node* next;
        node* prev;
        
        node(int k , int v){
            this->key = k;
            this->val = v;
            this->next = NULL;
            this->prev = NULL;
        }
        
        
    };
    
    int c ;
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    unordered_map<int , node*> m;
    
    
    LRUCache(int capacity) {
        
        c=capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    void addnode(node * newnode) {
    node * temp = head -> next;
    newnode -> next = temp;
    newnode -> prev = head;
    head -> next = newnode;
    temp -> prev = newnode;
   }

    void deletenode(node * delnode) {
    node * delprev = delnode -> prev;
    node * delnext = delnode -> next;
    delprev -> next = delnext;
    delnext -> prev = delprev;
   }
    
    int get(int key) {
        
        
        if (m.find(key) != m.end()) {
      node * resnode = m[key];
      int res = resnode -> val;
      m.erase(key);
      deletenode(resnode);
      addnode(resnode);
      m[key] = head -> next;
      return res;
    }

    return -1;
        
    }
    
    void put(int key, int value) {
        
       if (m.find(key) != m.end()) {
          node * existingnode = m[key];
          m.erase(key);
          deletenode(existingnode);
      }
       if (m.size() == c) {
          m.erase(tail -> prev -> key);
          deletenode(tail -> prev);
      }

        addnode(new node(key, value));
        m[key] = head -> next;
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
