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
private: 
    ListNode* reverseList(ListNode* head) {
         if(head == nullptr) return nullptr;
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        ListNode* a;
        temp->next = nullptr;
        while(temp2!=nullptr){
            a = temp2;
            temp2 = temp2->next;
            a->next = temp;
            temp = a;
        }
        return temp;
    }
public:
    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);
        ListNode* track = head;
        for(ListNode* temp = head; temp->next != nullptr; temp = temp->next){
            if(temp->next->val >= track->val) {
                track->next = temp->next;
                track = track->next;
            }
        }
        track->next = nullptr;
        head = reverseList(head);
        return head;
        
    }
};