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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // ListNode* temp = headA;
        // int counta=0,countb=0;
        // for(;temp!=nullptr;temp = temp->next)counta++;
        // temp=headB;
        // ListNode *tempx = headB;
        // for(;temp!=nullptr;temp = temp->next)countb++;

        // temp = headA;
        // if(counta>countb){
        //     while(counta!=countb){
        //         temp= temp->next;
        //         counta--;
        //     }
        // }
        // else {
        //     while(counta!=countb){
        //         tempx= tempx->next;
        //         countb--;
        //     }

        // }

        // while(temp!=tempx){
        //     temp = temp->next;
        //     tempx = tempx->next;
        // }
        // return temp;

        ListNode* tempa = headA;
        ListNode* tempb = headB;

        while(tempa != tempb){
            if(tempa != nullptr) tempa = tempa-> next;
            else tempa = headB;
            if(tempb != nullptr) tempb = tempb-> next;
            else tempb = headA;
        }
        return tempa;
    }
};