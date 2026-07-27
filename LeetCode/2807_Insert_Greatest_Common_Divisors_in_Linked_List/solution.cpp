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
    int gcdc(int a,int b){
        if(a>b)swap (a,b);
        while(a>0){
            int k = b % a;
            b=a;
            a=k;
        }
        return b;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != nullptr){
            ListNode* temp1 = new ListNode(gcdc(temp->val,temp->next->val));
            temp1->next = temp->next;
            temp->next = temp1;
            temp = temp->next->next;
        }
        return head;
    }
};