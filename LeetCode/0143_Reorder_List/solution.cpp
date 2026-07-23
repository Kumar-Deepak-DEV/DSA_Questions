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
    ListNode* reverseList(ListNode* head){
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
    void reorderList(ListNode* head) {
        if (head->next == nullptr)return;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newbie = slow->next;
        slow->next = nullptr;
        newbie = reverseList(newbie);

        ListNode* temp1 = head;
        ListNode* temp2 = newbie;

        while (temp2 != nullptr) {
            ListNode* next1 = temp1->next;
            ListNode* next2 = temp2->next;

            temp1->next = temp2;
            temp2->next = next1;

            temp1 = next1;
            temp2 = next2;
        }
        // head = heat->next;
    }
};
