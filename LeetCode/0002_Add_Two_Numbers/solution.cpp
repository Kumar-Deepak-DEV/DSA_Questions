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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        int sum = temp->val + temp2->val + carry;
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        }
        ListNode* current = new ListNode(sum);
        ListNode* l3 = current;
        while (temp->next != nullptr && temp2->next != nullptr) {
            temp = temp->next;
            temp2 = temp2->next;
            int sum = temp->val + temp2->val + carry;
            if (sum > 9) {
                carry = 1;
                sum -= 10;
            }
            else carry = 0;
            l3->next = new ListNode(sum);
            l3 = l3->next;
        }
        while (temp->next != nullptr) {
            temp = temp->next;
            int sum = temp->val+ carry;
            if (sum > 9) {
                carry = 1;
                sum -= 10;
            }
            else carry = 0;
            l3->next = new ListNode(sum);
            l3 = l3->next;
        }
        while (temp2->next != nullptr) {
            temp2 = temp2->next;
            int sum = temp2->val + carry;
            if (sum > 9) {
                carry = 1;
                sum -= 10;
            }
            else {
                carry = 0;
            }
            l3->next = new ListNode(sum);
            l3 = l3->next;
        }
        if(carry == 1) {
            l3->next = new ListNode(1);
            l3 = l3->next;
        }
        return current;
    }
};