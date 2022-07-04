https://leetcode.com/problems/merge-two-sorted-lists/



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
     
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        
        
        while(l1 && l2){
            
            
            if(l1->val <= l2->val){
                
                curr->next = l1;
                curr = l1;
                l1 = l1->next;
                
                
            }
            else{
                
                curr->next = l2;
                curr = l2;
                l2 = l2->next;
                
                
            }
            
            
        }
        
        
        while(l1){
            
            curr->next = l1;
            curr = l1;
            l1 = l1->next;
            
        }
        
        while(l2){
            
            curr->next = l2;
            curr = l2;
            l2 = l2->next;
            
        }
        
        
        return dummy->next;
    }
};

