/* The purpose of this program is to
 determine which subarray of elements, 
 given a fixed length for the subarray,
 produces the maximum sum value.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int k = 4;
    int i = 0;
    int maxSum;
    int currSum;
    vector<int> nums = {3,-1,4,12,-8,5,6};

    for (int j = i + k; j < nums.size(); j++) {

        currSum = 0;

        //computing the sum of current subarray of vals
        for (i; i < j; i++) {
            currSum += nums[i];
        }

        //checking if that sum is the new max
        if (currSum > maxSum) {
            maxSum = currSum;
        }

    }

    cout << "the max sum is: " << maxSum << endl;

    return 0;
}
