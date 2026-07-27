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
    void deleteNode(ListNode* node) {
        // ListNode* temp = node;
        // for (; temp->next != nullptr; temp = temp->next){
        //     temp->val = temp->next->val;
        // }
        // temp->next = nullptr;

        // temp = node;

        // while(temp != nullptr && temp->next != nullptr && temp->next->next !=nullptr){
        //     cout<<temp->val<<endl;
        //     temp=temp->next;
        // }
        // temp->next = nullptr;

        node -> val = node -> next -> val;
        ListNode* temp = node -> next -> next;
        node -> next = temp;
    }
};