#include <iostream>
#include <vector>
using namespace std; //for convenience, although usually a bad practice.

int main() {

    vector<int> nums = {1,2,3,4};
    vector<int> sums(nums.size());
    int prevSum = 0;

    for (int i = 0; i < nums.size(); i++) {

        prevSum += nums[i];
        sums[i] = prevSum;
    }

    cout << endl;

    return 0;
}
