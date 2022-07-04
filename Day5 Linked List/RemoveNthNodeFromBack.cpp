https://leetcode.com/problems/remove-nth-node-from-end-of-list/




class Solution {
public:
    
//     int l(ListNode* head){
        
//         int cnt = 0;
        
//         while(head){
            
//             cnt++;
//             head = head->next;
            
//         }
        
//         return cnt;
//     }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     
        
//         int length = l(head);
        
        
//         if(length==1)
//             return NULL;
        
        
//         if(length==n)
//             return head->next;
        
//         ListNode* curr = head;
        
//         int p = length - n;
        
        
//         int i=1;
        
//         while(curr && i<p){
            
            
//             i++;
            
//             curr = curr->next;
            
            
//         }
        
//         ListNode* to_del = curr->next;
        
//         curr->next = curr->next->next;
        
//         delete(to_del);
        
//         return head;
        
        int i = 0;
        
        ListNode* dummy = new ListNode();
        
        dummy->next = head;
        
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        
        while(i<n){
            
            fast = fast->next;
            i++;
            
            
        }
        
        if(fast->next==NULL)
            return dummy->next->next;
        
        
        while(fast->next){
            
            slow = slow->next;
            fast = fast->next;
            
            
        }
        
        
        slow->next = slow->next->next;
        return head;
        
    }
};
