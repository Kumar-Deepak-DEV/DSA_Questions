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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!= nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i = 0;
        while(i+k<=v.size()){
            reverse(v.begin()+i,v.begin()+k+i);
            i+=k;
        }
        
        temp=head;
        i=0;
        while(temp!= nullptr){
            temp->val = v[i];
            i++;
            temp=temp->next;
        }
        return head;

    }
};