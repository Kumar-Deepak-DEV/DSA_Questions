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
    ListNode* reverseList(ListNode* head, int nodes) {
        ListNode* temp = head;
        ListNode* temp3 = head;
        ListNode* prev = nullptr;
        while(nodes--){
            ListNode* temp2 = temp->next;
            temp->next = prev;
            prev = temp;
            temp = temp2;
        }
        temp3->next = temp;
        return prev;
    }

public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int i = 1;
        int j = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            j++;
            temp = temp->next;
        }
        temp = head;
        int k = 2;
        while (temp != nullptr && j-i>=k) {
            if(k%2 == 0)temp->next = reverseList(temp->next, k);
            int m = k;
            while(m>0){
                temp = temp->next;
                m--;
            }
            i+=k;
            k++;
            if(j-i == 0)break;
            if(k>j-i) k = j-i;
        }
        return head;
    }
};