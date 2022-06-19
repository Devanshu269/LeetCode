/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        int v1,v2,carry = 0,sum;
        while(l1||l2){
            if(l1!=NULL){
                v1 = l1->val;
                l1 = l1->next;
            }
            else v1 = 0;
            
            if(l2!=NULL){
                v2 = l2->val;
                l2 = l2->next;
            }
            else v2 = 0;
            
            sum = v1+v2+carry;
            carry = sum/10;
            sum = sum%10;
            ListNode* ptr = new ListNode(sum);
            curr->next = ptr;
            curr = ptr;
        
        }
        if(carry>0){
            ListNode* tmp = new ListNode(carry);
            curr->next = tmp;
            curr = tmp;
        }
    
        return head->next;
    }
};