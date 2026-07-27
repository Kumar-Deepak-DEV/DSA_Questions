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
        vector<ListNode*> splitListToParts(ListNode* head, int k) {
            vector<ListNode*> vec;
            ListNode* temp = head;
            int count = 0;
            for (; temp != nullptr; temp = temp->next)
                count++;

            int rem = count % k;
            count /= k;

            temp = head;
            int i = 0;

            for (int j = 0; j < k; j++) {
                vec.push_back(temp);
                int a = count;
                if (rem>0){
                    a++;
                    rem--;
                }
                if(a == 0) continue;
                for (int m = 1; m < a; m++) {
                    temp = temp->next;
                }

                if (temp != nullptr) {
                    ListNode* temp2 = temp->next;
                    temp->next = nullptr;
                    temp = temp2;
                }
            }

            return vec;
        }
    };