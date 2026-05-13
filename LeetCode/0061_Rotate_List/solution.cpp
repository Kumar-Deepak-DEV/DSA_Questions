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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head==nullptr)return head;
        int i = 0;

        ListNode* temp = head;

        while (temp != nullptr) {
            i++;
            temp = temp->next;
        }

        temp = head;

        k = i - k % i;
        if(i==k)return head;
        int j = 0;
        ListNode* tem = new ListNode(0);
        ListNode* res = tem;


        while(temp!=nullptr){
            if(k>0){
                k--;
                temp=temp->next;
                continue;
            }

            tem->next=temp;
            tem=tem->next;
            temp=temp->next;
            j++;
            if(j==i) break;
            if(temp==nullptr)temp=head;
        }
        tem->next = nullptr;
        return res->next;
    }
};