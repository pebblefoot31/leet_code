#include <iostream>
using namespace std;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
    LinkedListNode *prev;
    LinkedListNode(int val): val (val), next(nullptr), prev(nullptr) {}
};

int main() {
    LinkedListNode *head = new LinkedListNode(-1);
    LinkedListNode *tail = new LinkedListNode(-1);
    head->next = tail;
    tail->prev = head;
    tail->next = nullptr;

    LinkedListNode *dummy = head;
    
    for (int i = 1; i < 4; i++) {
        LinkedListNode *l = new LinkedListNode(i);
        dummy->next = l;
        l->prev = dummy;
        l->next = nullptr;
        dummy = l;
    }
    
    dummy->next = tail;
    head = head->next;
    
    while (head->next != nullptr) {
        cout << head->val << endl;
        head = head->next;
    }
    
    return 0;
    
}
