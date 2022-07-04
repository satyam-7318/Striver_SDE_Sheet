https://leetcode.com/problems/intersection-of-two-linked-lists/




class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        
        // Approach 1 --> Find length of both LL , then move head pointer of longer LL by distance of difference and then move both pointers simultaneously. First Equal nodes will be ans 
        
        
        // Approach 2
        ListNode* d1 = a;
        ListNode* d2 = b;
        
        
        while(d1!=d2){
            
            if(d1==NULL)
                d1 = b;
            else
                d1 = d1->next;
            
            if(d2==NULL)
                d2 = a;
            else
                d2 = d2->next;
            
            
        }
        
        
        return d1;
        
    }
};
