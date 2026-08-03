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
    ListNode* reverseList(ListNode* head, int extraNodes) {
        int count = 0;
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        ListNode* temp3;
        temp->next = nullptr;
        while (count < extraNodes) {
            count++;
            temp3 = temp2;
            temp2 = temp2->next;
            temp3->next = temp;
            temp = temp3;
        }
        head->next = temp2;
        return temp;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;
        ListNode* temp = head;
        int whatNodeToSend = 1;
        while (whatNodeToSend < left) {
            temp = temp->next;
            whatNodeToSend++;
        }
        temp = reverseList(temp, right - left);
        if (left == 1) return temp;
        int whereToJoinNode = 2;
        ListNode* temp2 = head;
        while (whereToJoinNode < left) {
            temp2 = temp2->next;
            whereToJoinNode++;
        }
        temp2->next = temp;
        return head;
    }
};