https://leetcode.com/problems/middle-of-the-linked-list/




class Solution {
public:
    
//     int l(ListNode* head){
        
//         int cnt = 0;
        
//         while(head){
            
//             head = head->next;
//             cnt++;
            
            
//         }
        
//         return cnt;
        
        
//     }
    
    
    ListNode* middleNode(ListNode* head) {
        
        // Approach 1 , length of LL then mid of LL
        
//         int length = l(head);
        
        
//         int mid = length/2 + 1;
        
        
//         int i = 0;
        
//         while(head && i<mid-1){
            
            
//             i++;
//             head = head->next;
            
            
//         }
        
        
//         return head;
        
        
        //  Approach 2 , Slow Fast Approach
        
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        
        while(slow && fast && fast->next){
            
            
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        return slow;
        
    }
};
