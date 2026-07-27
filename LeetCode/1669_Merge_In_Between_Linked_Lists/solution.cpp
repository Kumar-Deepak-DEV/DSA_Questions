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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* temp = list1;
        ListNode* tempx = list2;
        ListNode* tempa = list1;
        ListNode* tempb = list1;
        for (; tempx->next != nullptr; tempx = tempx->next);

        for (; temp != nullptr; temp = temp->next) {
            if (a == 1) tempa = temp;
            if (b == 0) tempb = temp;
            a--;
            b--;
        }
        tempa->next = list2;
        tempx->next = tempb->next;
        return list1;
    }
};