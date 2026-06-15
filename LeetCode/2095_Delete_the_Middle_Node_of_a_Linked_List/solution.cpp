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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp = head;
        int n = 0;
        while(temp != nullptr) {
            n++;
            temp=temp->next;
        }
        if(n==1) return nullptr;
        int k = n;
        if(k%2 == 1)k++;
        temp = head;
        while(temp != nullptr) {
            if(n==k/2 +1) {
                temp->next = temp->next->next;
                break;
            }
            n--;
            temp=temp->next;
        }
        return head;
    }
};