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
    ListNode* deleteDuplicates(ListNode* head) {
        // ListNode* temp = head;
        // map <int,int> m;
        // while(temp!=nullptr){
        //     if(!m[temp->val])m[temp->val]=0;
        //     m[temp->val]++; 
        //     temp = temp->next;
        // }
        // ListNode* res = new ListNode*(0);
        // temp = res;
        // for (auto const& [elem,freq] : m) {
        //     if(freq == 1){
        //         temp->next = new ListNode(elem);
        //         temp = temp->next;
        //     }
        // }
        // return res->next;

        
        ListNode* prev = new ListNode(0);
        prev->next = head;
        ListNode* temp = prev;
        while(head!=nullptr){
            if(head->next != nullptr &&  head ->val == head -> next -> val){
                while(head->next != nullptr && head->val == head->next->val) head = head-> next;
                prev->next = head->next;
                head = head->next;
            }
            else{
                prev = head; 
                head = head->next;
            }
        }
        return temp->next;
    }
};