#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* off by one error */

int main() {

    vector<int> nums = {-3,2,-3,4,2};
    //vector<int> nums = {1,2};
    vector<int> sums(nums.size());
    int startValue = 4;
    int currSum = 0;
    int prevSum = startValue;
    int add = 0;

    //everytime, it might be a good idea to check if the minimum
    //value in the array is a 0 or a 1
    //we are done if the min value is a 1
    //continue incrementing upwards if the min value in the array is a 0
    //otherwise increment downwards!
    
    int min;

    while (true) {

        prevSum = startValue;

        for (int i = 0; i < nums.size(); i++) {
            currSum = prevSum + nums[i];
            prevSum = currSum;
            sums[i] = currSum;
        }

        min = *min_element(sums.begin(), sums.end());

        if (min == 1) {
            cout << startValue << endl;
            break;
        } else if (min <= 0) {
            startValue += 1;
        } else {
            startValue -= 1;
        }

        sums.clear();
    }

    return 0;
}
