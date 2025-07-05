#include <iostream>
#include <vector>
using namespace std;

int main() {

    //vector<int> nums = {1,2,3,4};
    vector<int> nums = {0,4,0};
    vector<int> ans(nums.size(),0);
    int numZero = 0;
    int L = 1;
    int R = 1;

    for (int j = 0; j < nums.size(); j++) {

        numZero = 0;
        for (int k = 0; k < j; k++) {
            if (nums[k] == 0) { 
                numZero++; 
            } if (nums[k] != 0) {
                L *= nums[k];
            }

        }

        if (numZero) {
            L = 0;
        }

        numZero = 0;
        for (int l = j+1; l < nums.size(); l++) {
            if (nums[l] == 0) { 
                numZero++; 
            } if (nums[l] != 0) {
                R *= nums[l];
            }
        }

        if (numZero) {
            R = 0;
        }

        ans[j] = L * R;
        cout << ans[j] << " ";
        L = 1;
        R = 1;
    }

    cout << endl;
    
    return 0;

}

