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

    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode*  slow = head;
        while(fast->next !=nullptr && fast->next->next !=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next == nullptr) return slow;
        return slow->next;
    }

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

    bool isPalindrome(ListNode* head) {
        ListNode* mid = middleNode(head);
        cout<<mid->val;
        ListNode* head2 = reverseList(mid);
        ListNode* temp = head;
        while(temp!=mid){
            if(head2->val != temp->val)return false;
            head2 = head2->next;
            temp = temp->next;
        }
        return true;
    }
};