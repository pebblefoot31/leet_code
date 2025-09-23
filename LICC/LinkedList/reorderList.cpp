#include <iostream>
using namespace std;

// reorder list
// order list like one from front, one from end, etc.

int main() {

    if (head == null) {
        //return immediately
    }

    //create the second linked list only from the middle
    ListNode * slow = head;
    ListNode * fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *rev = NULL;
    ListNode *curr = slow;
    ListNode *tmp;

    // making reverse list
    while (curr) {
        tmp = curr->next;
        curr->next = rev;
        rev = curr;
        curr = tmp;
    }

    //linking alternating values in the forward and reversed list
    ListNode *ans = new ListNode(head->val);
    ListNode * first = head; 
    ListNode * second = rev;

    while (second->next) {

        tmp = first->next;    
        first->next = second;
        first = tmp;

        tmp = second->next;
        second->next = first;
        second = tmp;
    }

    //return head;
    
    return 0;

}

