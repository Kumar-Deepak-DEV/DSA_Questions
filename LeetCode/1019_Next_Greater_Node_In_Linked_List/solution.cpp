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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* temp1 = head;
        while (temp1 != nullptr) {
            ListNode* temp2 = temp1->next;
            while (temp2 != nullptr && temp2->val <= temp1->val)
                temp2 = temp2->next;
            if (temp2 != nullptr)
                ans.push_back(temp2->val);
            else
                ans.push_back(0);
            temp1 = temp1->next;
        }
        return ans;
    }
};