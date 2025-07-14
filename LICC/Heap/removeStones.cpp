#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    vector<int> piles = {5,4,9};
    int k = 2;
    int count = 0;
    int curr;
    priority_queue<int> heap(piles.begin(), piles.end());

    while (count < k) {

        curr = heap.top();
        heap.pop();
        heap.push((curr+1)/2);
        count++;
    }

    while (heap.size() != 0) {
        cout << heap.top() << endl;
        heap.pop();
    }

    return 0;
}
