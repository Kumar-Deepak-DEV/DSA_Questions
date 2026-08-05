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
    int pairSum(ListNode* head) {
        // ListNode * temp = head;
        // vector<int>s;
        // while(temp != nullptr) {
        //     s.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int sum = 0;
        // for(int i = 0; i<s.size()/2;i++){
        //     int a = s[i]+s[s.size()-i-1];
        //     if(a>sum)sum = a;
        // }
        // return sum;

        ListNode* fast = head;
        ListNode* prev = nullptr;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            ListNode*temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        int count = 0;
        while(prev!=nullptr){
            int sum = prev->val + slow->val;
            count = count>sum?count:sum;

            prev = prev->next;
            slow = slow->next;
        }
        return count;

    }
};