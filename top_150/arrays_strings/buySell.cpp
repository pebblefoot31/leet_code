#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> nums = {7,1,5,3,6,4};
    int profit = 0;

    for (int i =0; i < nums.size()-1; i++) {
        for (int j = i+1; j < nums.size(); j++) {

            if ((nums[j]-nums[i]) > profit) {
                profit = nums[j]-nums[i];
            }
        }
    }

    if (profit <= 0) {
        profit = 0;
    } 
    cout << profit << endl;
    return 0;
}
