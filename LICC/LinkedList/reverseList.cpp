#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main() {

    ListNode* head = new ListNode(3);
    //head->next=nullptr;
    ListNode* dummy = head;

    //creating a list
   for (int i = 3; i < 4; i++) {
       ListNode *l = new ListNode(i);
       dummy->next = l;
       l->next = nullptr;
       dummy = l;
   }


    ListNode *start;
    ListNode *end;
    int left = 1;
    int right = 1;

    dummy = head;
    ListNode* prev;

    cout << "here"<< endl;
    //locating start and end
    while (dummy != nullptr) {
        
        if (dummy->next->val == left) {
            prev = dummy;
        }
        if (dummy->val == left) {
            start = dummy;
            break;
        }
        dummy = dummy->next;
    }

    cout << "here"<< endl;
    while (dummy != nullptr) {
        if (dummy->val == right) {
            end = dummy;
            break;
        }

        dummy = dummy->next;
    }

    cout << "here"<< endl;

    if (start != nullptr && end != nullptr) {
        ListNode *i = start;
        ListNode *j = i->next;
        ListNode *tmp;

        //reversing logic
        if (head == start) {
            head = end;
        } else {
            prev->next = end;
        }

        i->next = end->next;
        while (i->val != end->val) {
            tmp = j->next;
            j->next = i;
            i = j;
            j = tmp;
        }
    }

    //output list
    dummy = head;
    while (dummy != nullptr) {
        cout << dummy->val << endl;
        dummy = dummy->next;
    }

    return 0;
}
