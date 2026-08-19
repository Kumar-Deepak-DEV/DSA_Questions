/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>tracker;
        Node* temp = head;
        Node* n = new Node(0);
        Node* track = n;
        while(temp != nullptr){
            Node* neww = new Node(temp->val);
            track -> next = neww;
            tracker[temp] = neww;
            track = track->next;
            temp = temp->next;
        }
        track = n->next;
        temp = head;
        while(temp != nullptr){
            track -> random = tracker[temp->random];
            track = track->next;
            temp = temp->next;
        }
        return n->next;
    }
};