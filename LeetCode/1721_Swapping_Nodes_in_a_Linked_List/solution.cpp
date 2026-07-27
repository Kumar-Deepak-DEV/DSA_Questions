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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;
        ListNode* temp2 = head;
        for (; temp != nullptr; temp = temp->next)
            count++;
            count-=k;
            k--;
        temp = head;
        while(count--)temp=temp->next;
        while(k--)temp2=temp2->next;

        swap(temp2->val,temp->val);
        return head;

    }
};