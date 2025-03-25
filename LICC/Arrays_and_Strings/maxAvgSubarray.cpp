#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {1,12,-5,-6,50,3};
    //vector<int> nums = {5};
    float k = 4;

    int i = 0;

    float currSum;
    float currAvg;
    float maxAvg;

    for (int j = (k-1); j < nums.size(); j++) {

        i = j - k + 1;
        while (i < j) {
            currSum += nums[i];
            i++;
        }

        cout << currSum << endl;
        currAvg = currSum / k;
        if ((j == (k-1)) || (maxAvg < currAvg)) {
            maxAvg = currAvg;
        }
    }

    cout << "max avg: " << maxAvg << endl;
    cout << endl;

}
