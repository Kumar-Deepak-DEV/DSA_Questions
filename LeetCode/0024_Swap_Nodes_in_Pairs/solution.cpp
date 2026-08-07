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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;
        while(dummy!= nullptr && dummy->next != nullptr && dummy->next->next != nullptr){
            ListNode* temp = dummy->next->next;
            dummy->next ->next = temp->next;
            temp->next = dummy->next;
            dummy->next = temp;
            dummy = dummy->next->next;
        }
        return current->next;
    }
};