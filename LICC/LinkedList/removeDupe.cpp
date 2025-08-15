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
    
    ListNode* head = new ListNode(4);
    ListNode *dummy = head;

    int k = 1;
    for (int i = 1; i < 4;i++) {

        ListNode *l = new ListNode(k);
        dummy->next = l;
        l->next = nullptr;
        dummy = l;

        if (i%2 == 0)
            k++;

    }

    if (head && head->next) {
         ListNode *currNext = head->next;
         ListNode *curr = head;

         while (curr && curr->next) {
             // cout << "considering: " << curr->val << " and " << currNext->val << endl;
             if (curr->val == curr->next->val) {
                 if (curr->next->next)
                     curr->next = curr->next->next;
                 else
                     curr->next = nullptr;

             } else {
                 curr = curr->next;
             }
         }
     }

    dummy = head->next;
    while (dummy->next) {
        cout << dummy->val << endl;
        dummy=dummy->next;
    }

    return 0;

}
