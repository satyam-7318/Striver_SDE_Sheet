https://leetcode.com/problems/palindrome-linked-list/




class Solution {
public:
    
    ListNode* reverse(ListNode* node){
        
        if(node==NULL || node->next==NULL)
            return node;
        
        
        ListNode* rest = reverse(node->next);
        
        node->next->next = node;
        node->next = NULL;
        
        return rest;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        
        while(fast->next && fast->next->next){
            
            slow = slow->next;
            fast = fast->next->next;
            
            
        }
        
        
        slow->next = reverse(slow->next);
        
        slow = slow->next;
        
        ListNode* curr = head;
        
        
        while(slow){
            
            
            if(slow->val!=curr->val)
                return false;
            
            curr = curr->next;
            slow = slow->next;
            
            
        }
        
        return true;
        
    }
};
