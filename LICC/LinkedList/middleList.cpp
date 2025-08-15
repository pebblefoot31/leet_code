#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {
    
    ListNode* head = new ListNode(-1);
    head->next = nullptr;
    ListNode *dummy = head;
    ListNode *fast = head;
    ListNode *slow = head;

    for (int i = 1; i < 8; i++) {
        ListNode *l = new ListNode(i);
        dummy->next = l;
        l->next = nullptr;
        dummy = l;
    }

    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    cout << slow->val << endl;

}
