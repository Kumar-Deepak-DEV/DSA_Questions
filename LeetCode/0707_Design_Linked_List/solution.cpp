class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
private:
    Node* head;

public:
MyLinkedList(){ this->head = nullptr;}
    int get(int index) {

        int i = 0;
        Node* temp = head;
        while (temp != nullptr) {
            if (i == index) return temp->data;
            temp = temp->next;
            i++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void addAtTail(int val) {
        Node* last = new Node(val);
        Node* temp = head;
        if (head == nullptr) {
            head = last;
            return;
        }
        for (; temp->next != nullptr; temp = temp->next);
        temp->next = last;
    }

    void addAtIndex(int index, int val) {
        Node* last = new Node(val);
        Node* temp = head;
        if (head == nullptr) {
            if (index == 0) {
                head = last;
                return;
            } else return;
        }
        if (index == 0) {
            last->next = head;
            head = last;
            return;
        }
        
        int a = 0;
        while (a < index - 1 && temp != nullptr) {
            temp = temp->next;
            a++;
        }
        if (temp == nullptr)
            return;
        last->next = temp->next;
        temp->next = last;
    }

    void deleteAtIndex(int index) {
        Node* temp = head;
        if (head == nullptr) return;
        if (index == 0) {
            head = head->next;
            return;
        }
        int a = 0;
        while (a < index - 1 && temp != nullptr) {
            temp = temp->next;
            a++;
        }
        if (temp == nullptr|| temp->next == nullptr)
            return;
        temp->next = temp->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */