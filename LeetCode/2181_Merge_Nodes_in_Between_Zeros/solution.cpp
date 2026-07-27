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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* temp2 = head;
        int sum = 0;
        for(; temp!=nullptr; temp = temp -> next){
            if(temp->val != 0)sum+=temp->val;
            else{
                temp2->val = sum;
                if(temp->next == nullptr) temp2->next = nullptr;
                else temp2 = temp2->next;

                sum = 0;
            } 
        }
        return head;
    }
};