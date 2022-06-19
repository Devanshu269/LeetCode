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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL)
            return NULL;
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        ListNode* head = NULL;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        if(list1->val < list2->val){
            head = list1;
            temp1 = temp1->next;
        }
        else if(list1->val > list2->val){
            head = list2;
            temp2 = temp2->next;
        }
        else{
            head = list1;
            temp1 = temp1->next;
        }
        ListNode* ans = head;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val < temp2->val){
                head->next = temp1;
                head = head->next;
                temp1 = temp1->next;
            }else if(temp1->val > temp2->val){
                head->next = temp2;
                head = head->next;
                temp2= temp2->next;
            }else{
                head->next = temp1;
                head = head->next;
                temp1 = temp1->next;
            }
        }
        if(temp1 != NULL)
            head->next = temp1;
        if(temp2 != NULL)
            head->next = temp2;
        return ans;
    }
};