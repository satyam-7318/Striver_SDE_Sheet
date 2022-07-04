https://leetcode.com/problems/reverse-nodes-in-k-group/


class Solution {
public:
    
    ListNode* fun(ListNode* head, int k , int& part){
        
        if(head==NULL || head->next==NULL || part==0)
            return head;
        
        
        int cnt = 0;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next;
        
        while(curr && cnt<k){
            
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
            
        }
        
        part--;
        
        if(next!=NULL)
            head->next = fun(next,k,part);
        
        return prev;
        
        
    } 
    
    
    int length(ListNode* head){
        
        int cnt = 0;
        
        while(head){
            head = head->next;
            cnt++;
        }
        
        return cnt;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
            int l = length(head);
        
        int part = l/k;
        
        return fun(head , k , part);
        
    }
};
