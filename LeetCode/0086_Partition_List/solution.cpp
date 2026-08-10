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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* temp = dummy1;
        ListNode* temp2 = dummy2;
        while(head != nullptr){
            if(head->val >= x ) {
                dummy2->next = head;
                dummy2 = dummy2->next;
            }
            else {
                dummy1->next = head;
                dummy1 = dummy1->next;
            }
            head = head->next;
        }
        dummy1->next = temp2->next;
        dummy2->next = nullptr;
        return temp->next;
    }
};