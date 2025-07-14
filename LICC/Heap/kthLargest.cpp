#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    vector<int> nums = {1,2,3,4};
    int k = 3;

    priority_queue<int> arr(nums.begin(), nums.end());

    for (int i = 0; i < (k-1); i++) {
       arr.pop();
    }

    cout << arr.top() << endl;

    return 0;
}

