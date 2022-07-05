/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int flag=0;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast){
                flag=1;
                break;
            }  
        }
        ListNode* start = head;
        ListNode* loop = slow;
        if(flag==1){
         if(start == loop){
           return start;
       }
       else{
           while(loop->next != start->next){
            loop = loop->next;
             start = start->next;
        }
           return start->next;
       }
        }
        return NULL;
    }
};