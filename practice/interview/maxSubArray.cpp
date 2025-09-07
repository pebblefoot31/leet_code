#include <iostream>
#include <vector>
using namespace std;

int main() {

    //vector<int> nums = {5,4,-1,7,8};
    //vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    //vector<int> nums = {1};
    vector<int> nums = {-2,-1};
    int currSum = 0;
    int maxSum = nums[0];

    // Solved using Kadane's algo:

    // 1. if the sum is negative, we want to restart and set the sum to be the curr value
    // 2. if positive, we want to add on the curr value and keep going

    for (int i = 0; i < nums.size(); i++) {

        if (currSum >= 0) {
            currSum += nums[i];
        } else {
            currSum = nums[i];
        }

        maxSum = max(currSum, maxSum);

        cout << endl;

    }

    cout << maxSum << endl;


    // Solved using a brute-force approach with prefix sums (TLE -- not best)

    vector<int> sums;
    maxSum = nums[0];
    currSum = 0;

    if (nums.size() == 1) {
       //cout << nums[0] << endl;
    }

    for (int i = 0; i < nums.size(); i++) {
       sums.push_back((currSum += nums[i]));
       maxSum = max(currSum, maxSum);
    }

    for (int j = 0; j < sums.size()-1; j++) {
        for (int k = j+1; k < sums.size(); k++) {
            currSum = sums[k]-sums[j];
            maxSum = max(currSum, maxSum);
        }
    }

    // cout << maxSum << endl;

    return 0;
}
