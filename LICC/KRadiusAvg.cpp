#include <iostream>
#include <vector>
using namespace std;

/* K-Radius solution without using prefix-sum method. */

int main() {

    //vector<int> nums = {7,4,3,9,1,8,5,2,6};
    vector<int> nums = {10000};
    vector<int> avgs(nums.size(), -1);
    int k = 1;
    int minLength = k*2 + 1;
    int currSum = 0;
    int currAvg = 0;

    if (nums.size() < minLength) {

        cout << "return -1 array." << endl;

    } else {
        
        for (int i = k; i < (nums.size() - k); i++) {

            for (int j = (i-k); j <= (i + k); j++) {
               
                currSum += nums[j];
                cout << nums[j] << " ";
            }

            cout << endl;

            currAvg = currSum / (k*2 + 1);
            cout << "i: " << i << endl;
            cout << " currSum : currAvg " << currSum << " : " << currAvg << endl;
            avgs[i] = currAvg;
            currSum = 0;
        }
    }

    for (int l = 0; l < avgs.size(); l++) {
        cout << avgs[l] << " ";
    }

    cout << endl;
    
    return 0;
}
