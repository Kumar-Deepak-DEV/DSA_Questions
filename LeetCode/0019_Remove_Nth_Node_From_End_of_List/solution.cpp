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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int count = 0;
        
        while(current!=nullptr){
            current = current->next;
            count++;        
        }
        if (n==count) return head->next; 
        current = head;
        while(count>0){
            count--;
            if(count==n) current->next=current->next->next;
            if(current->next!=nullptr)current=current->next;
        }
        return head;
    }
};