https://leetcode.com/problems/reverse-linked-list/



class Solution {
public:
    
    ListNode* revRec(ListNode* head){
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* rest = revRec(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        
        return rest;
        
    }
    
    ListNode* reverseList(ListNode* head) {
        
        // iterative approach
        
//         ListNode* curr = head;
//         ListNode* prev = NULL;
//         ListNode* next;
        
        
//         while(curr){
            
            
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
            
            
//         }
        
//         return prev;
        
        return revRec(head);
    }
};
